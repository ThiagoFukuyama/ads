package com.example.prova1;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void handleLogin(View view) {
        EditText edUsuario = findViewById(R.id.edUsuario);
        EditText edSenha = findViewById(R.id.edSenha);

        String usuario = edUsuario.getText().toString();
        String senha = edSenha.getText().toString();

        Login login = Login.getLoginHandler();

        if (login.autenticar(usuario, senha)) {
            startActivity(new Intent(this, BoletimActivity.class));
        } else {
            Toast.makeText(this, "Usuário ou senha inválidos", Toast.LENGTH_LONG).show();
        }
    }
}