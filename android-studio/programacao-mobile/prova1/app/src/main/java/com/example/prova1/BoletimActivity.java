package com.example.prova1;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;

import java.util.Arrays;

public class BoletimActivity extends AppCompatActivity {
    Spinner spinnerDisciplinas;
    Spinner spinnerPeriodos;
    EditText edAv1;
    EditText edAv2;
    EditText edAv3;
    TextView txtResultado;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_boletim);

        spinnerDisciplinas = findViewById(R.id.spinnerDisciplinas);
        spinnerPeriodos = findViewById(R.id.spinnerPeriodos);
        edAv1 = findViewById(R.id.edAv1);
        edAv2 = findViewById(R.id.edAv2);
        edAv3 = findViewById(R.id.edAv3);
        txtResultado = findViewById(R.id.txtResultado);

        carregarSpinnerDisciplinas();
        carregarSpinnerPeriodos();
    }

    private void carregarSpinnerDisciplinas() {
        ArrayAdapter<String> adapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1);

        adapter.addAll(
                Arrays.asList("Matemática", "História", "Informática", "Geografia", "Português")
        );

        spinnerDisciplinas.setAdapter(adapter);
    }

    private void carregarSpinnerPeriodos() {
        ArrayAdapter<String> adapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1);

        adapter.addAll(
                Arrays.asList("Diurno", "Noturno", "Matutino", "Vespertino")
        );

        spinnerPeriodos.setAdapter(adapter);
    }

    public void registrar(View view) {
        String disciplina = spinnerDisciplinas.getSelectedItem().toString();
        String periodo = spinnerPeriodos.getSelectedItem().toString();

        String av1Texto = edAv1.getText().toString();
        String av2Texto = edAv2.getText().toString();
        String av3Texto = edAv3.getText().toString();

        if (av1Texto.isEmpty() || av2Texto.isEmpty() || av3Texto.isEmpty()) {
            Toast.makeText(this, "Preencha todos os campos", Toast.LENGTH_LONG).show();
            return;
        };

        Float av1 = Float.valueOf(av1Texto);
        Float av2 = Float.valueOf(av2Texto);
        Float av3 = Float.valueOf(av3Texto);

        Float media;
        String resultado;

        if (periodo.equals("Noturno")) {
            media = ((av1 * 3) + (av2 * 4) + (av3 * 3)) / 10;
            resultado = media >= 6 ? "Aprovado" : "Reprovado";
        } else {
            media = (av1 + av2 + av3) / 3;
            resultado = media >= 7 ? "Aprovado" : "Reprovado";
        }

        String relatorio =
                "Disciplina: " + disciplina +
                "\nPeríodo: " + periodo +
                String.format("%nMédia: %.2f", media) +
                "\nResultado: " + resultado;

        txtResultado.setText(relatorio);

        edAv1.setText("");
        edAv2.setText("");
        edAv3.setText("");
    }
}