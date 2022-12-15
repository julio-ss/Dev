package com.juliodev.frasesdodia;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import java.util.Random;

public class MainActivity extends AppCompatActivity {

    Button btnNovaFrase;
    TextView textoNovaFrase;

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        btnNovaFrase = findViewById(R.id.buttonNovaFrase);
        textoNovaFrase = findViewById(R.id.textoNovaFrase);

        btnNovaFrase.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                novaFrase(textoNovaFrase);
            }
        });
    }

    public void novaFrase(View view){
        String[] frases = {
                "Frase 1",
                "Frase 2",
                "Frase 3",
                "Frase 4"
        };

        Random random = new Random();
        String escolheFrase = frases[random.nextInt(frases.length)];
        textoNovaFrase.setText("" + escolheFrase);
    }
}