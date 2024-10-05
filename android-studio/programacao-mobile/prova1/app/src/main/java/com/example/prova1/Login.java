package com.example.prova1;

import java.util.HashMap;
import java.util.Map;

public class Login {
    private static Login instancia;
    private Map<String, String> usuarios;

    private Login() {
        usuarios = new HashMap<>();
        usuarios.put("professor", "fatec");
    }

    public static Login getLoginHandler() {
        if (instancia == null) {
            instancia = new Login();
        }

        return instancia;
    }

    public boolean autenticar(String usuario, String senha) {
        if (!usuarios.containsKey(usuario)) return false;

        return usuarios.get(usuario).equals(senha);
    }
}
