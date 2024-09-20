
#include <stdio.h>

typedef struct Time
{
	int hours;
	int minutes;
	int seconds;
} Time;

typedef struct Date
{
	int year;
	int month;
	int day;
} Date;

typedef struct Appointment
{
	Time time;
	Date date;
	char description[100];
} Appointment;

int main()
{
	Time time = {21, 30, 45};
	Date date = {2024, 4, 17};
	Appointment appointment = {time, date, "Reuniao com o ministerio de ADS"};

	printf("COMPROMISSO - %s\n", appointment.description);
	printf("Data - %d/%d/%d\n", appointment.date.day, appointment.date.month, appointment.date.year);
	printf("Horario - %d:%d:%d\n", appointment.time.hours, appointment.time.minutes, appointment.time.seconds);

	return 0;
}
