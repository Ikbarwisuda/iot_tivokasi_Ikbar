void setup() {
    pinMode(23, OUTPUT); // LED Merah
    pinMode(22, OUTPUT); // LED Kuning
    pinMode(21, OUTPUT); // LED Hijau
}

void loop() {
   // Lampu Merah menyala, Kuning & Hijau mati
    digitalWrite(23, HIGH);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    delay(10000);

    // Lampu Kuning menyala, Merah & Hijau mati
    digitalWrite(23, LOW);
    digitalWrite(22, HIGH);
    digitalWrite(21, LOW);
    delay(5000);

    // Lampu Hijau menyala, Merah & Kuning mati
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, HIGH);
    delay(15000);
}
