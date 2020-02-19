//Mapeamento de Hardware:

#define vermelho 11
#define amarelo 10
#define verde 9 


void setup(){
    
    //definindo pinos como saída
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

}

void loop() {
  
  //acende o vermelho e espera
  digitalWrite(vermelho, HIGH);
  delay(5000);
  
  //apaga o vermelho, acende o verde e espera
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  delay(5000);
  
  //apaga o verde, acende o amarelo e espera
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(2000);
  
  //apaga o amarelo e o programa reinicia
  digitalWrite(amarelo, LOW);
  
}
