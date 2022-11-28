package com.juliodev.caraoucoroa;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import java.util.Random;
import java.util.concurrent.TimeoutException;

public class GifActivity extends AppCompatActivity {

    private TextView resultado;
    private int cont;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_gif);

        resultado = findViewById(R.id.textResult);

        String[] faceMoeda = {"Cara", "Coroa"};
        Random random = new Random();

        String giroMoeda = faceMoeda[random.nextInt(faceMoeda.length)];
        resultado.setText(" " + giroMoeda);

    }

}