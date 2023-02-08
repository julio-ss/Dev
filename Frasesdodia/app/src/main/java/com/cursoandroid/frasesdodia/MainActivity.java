package com.cursoandroid.frasesdodia;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import java.util.Random;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void gerarNovaFrase(View view){

        String[] frases = {
                "Se eu tivesse planejado não teria dado tão certo, iniciou no olhar inesperado, e você cada vez mais perto.",
                "São circunstâncias muito complexas as que marcam ou decidem o destino dos homens….",
                "O destino é uma questão de escolha.",
                "Ai, amar é uma viagem com água e com estrelas."
        };

        //variavel para gerar numero aleatorio
        int numero = new Random().nextInt(4);

        TextView texto = findViewById(R.id.textResultado);
        texto.setText( frases[numero] );

    }

}
