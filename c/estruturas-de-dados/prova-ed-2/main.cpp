#include <iostream>

#include "LinkedList.h"
#include "StaticQueue.h"


int main(int argc, char** argv) {
	LinkedList *pacients = create_linked_list();
	StaticQueue *queue = create_static_queue(6);
	
	if (pacients == NULL) {
		printf("\nERROR: failed to allocate memory");
		return 1;
	}
	
	int menu_option;
	do {
		printf("\n\n------ Clinica SareBem ------");
		printf("\n------ Sistema de Pacientes ------");
		
		printf("\n\n1- Cadastrar paciente");
		printf("\n2- Listar pacientes");
		printf("\n3- Gerar relatorio");
		printf("\n4- Realizar agendamento");
		printf("\n5- Registrar atendimento");
		printf("\n6- Sair");
		
		printf("\n\nDigite a opcao desejada: ");
		scanf("%d", &menu_option);
		
		switch (menu_option) {
			case 1:
				Pacient new_pacient;
				printf("\n--- Cadastro de paciente ---");
				
				printf("\n\nDigite o codigo: ");
				scanf("%d", &new_pacient.id);
				
				if (find(pacients, new_pacient.id) != NULL) {
					printf("\n\nPaciente de codigo %d ja existe.\n", new_pacient.id);
					continue;
				}
				
				printf("\nDigite a idade: ");
				scanf("%d", &new_pacient.age);
				
				preppend(pacients, new_pacient);
				
				printf("\n\nPaciente cadastrado com sucesso!\n");
				break;
				
			case 2:
				if (is_list_empty(pacients)) {
					printf("\nAinda nao ha pacientes cadastrados no sistema.\n");
					continue;
				}
				
				printf("\n--- Pacientes ---: ");
				print_linked_list(pacients);
				printf("\n");
				break;
				
			case 3:
				if (is_list_empty(pacients)) {
					printf("\nAinda nao ha pacientes cadastrados no sistema.\n");
					continue;
				}
				
				printf("\n--- Relatorio ---: ");
				
				printf("\n\nIdade media dos pacientes: %.1f\n", average_age(pacients));
				print_elders_average_age(pacients);
				printf("\n");
				print_children_average_age(pacients);
				printf("\n");
				
				break;
				
			case 4:
				if (is_list_empty(pacients)) {
					printf("\nAinda nao ha pacientes cadastrados no sistema.\n");
					continue;
				}
				
				if (queue_size(queue) == 5) {
					printf("\nA fila de atendimento esta cheia.\n");
					print_static_queue(queue);
					printf("Tamanho: %d\n", queue_size(queue));
					continue;
				}
				
				int id;
				printf("\n--- Agendamento ---");
				
				printf("\n\nDigite o codigo do paciente: ");
				scanf("%d", &id);
				
				if (find(pacients, id) == NULL) {
					printf("\n\nPaciente de codigo %d nao existe.\n", id);
					continue;
				}
				
				enqueue(queue, id);
				
				printf("\n\nAtendimento cadastrado com sucesso!\n");
				print_static_queue(queue);
				printf("Tamanho: %d\n", queue_size(queue));
				
				break;
				
			case 5:
				if (is_empty_queue(queue)) {
					printf("\nA fila de atendimento esta vazia.\n");
					continue;
				}
				
				printf("\n--- Atendimento ---: ");
				printf("\n\nPaciente de codigo %d saiu da fila de atendimento.\n", dequeue(queue));
				print_static_queue(queue);
				printf("Tamanho: %d\n", queue_size(queue));
				
				break;
				
				
			case 6:
				printf("\nEncerrando o sistema...\n");
				break;
				
			default:
				printf("\nOpcao invalida.\n");
				break;
		}
		
	} while (menu_option != 6);
	
	free_linked_list(pacients);
	free_static_queue(queue);
	
	return 0;
}
