/* Fazer um programa, na linguagem C, que leia um
número inteiro e o exiba por extenso.
Exemplo 1:
Número: 9821
Exibir: nove mil e oitocentos e vinte e um
Exemplo 2:
Número: 467
Exibir: quatrocentos e sessenta e sete
Nota: o número lido deve estar entre 1 e 9.999; caso não
esteja, uma mensagem deve ser exibida ao usuário e um
novo valor deverá ser solicitado (até que o número fornecido
esteja no intervalo definido).*/

#include <stdio.h>

void main() {
    int numero, milhar, centena, dezena, unidade;
    
    printf("Digite um número de 1 a 9999: ");
    scanf("%d", &numero);
    
    while (numero > 9999 || numero < 1) {
        printf("Número inválido!\n");
        printf("Digite um número de 1 a 9999: ");
        scanf("%d", &numero);}
    
    milhar = numero / 1000;
    centena = (numero % 1000) / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;
    
    if (milhar == 1) {
        printf("mil");}
        else if (milhar == 2) {
            printf("dois mil");}
        else if (milhar == 3) {
            printf("três mil");}
        else if (milhar == 4) {
            printf("quatro mil");}
        else if (milhar == 5) {
            printf("cinco mil");}
        else if (milhar == 6) {
            printf("seis mil");}
        else if (milhar == 7) {
            printf("sete mil");}
        else if (milhar == 8) {
            printf("oito mil");}
        else if (milhar == 9) {
            printf("nove mil");}
    
    if (milhar > 0 && centena > 0 && (dezena > 0 || unidade > 0))
        printf(", ");
            else if (milhar > 0 && (centena > 0 || dezena > 0 || unidade > 0))
            printf(" e ");
        
    if (centena == 1 && dezena == 0 && unidade == 0) {
        printf("cem");}
        else if (centena == 1){
        printf("cento");}
        else if (centena == 2) {
            printf("duzentos");}
        else if (centena == 3) {
            printf("trezentos");}
        else if (centena == 4) {
            printf("quatrocentos");}
        else if (centena == 5) {
            printf("quinhentos");}
        else if (centena == 6) {
            printf("seiscentos");}
        else if (centena == 7) {
            printf("setecentos");}
        else if (centena == 8) {
            printf("oitocentos");}
        else if (centena == 9) {
            printf("novecentos");}
    
    if (centena > 0 && (dezena > 0 || unidade > 0)) {
        printf(" e ");}
    
    if (dezena == 1) {
        if (unidade == 0){
            printf("dez");}
        else if (unidade == 1){
            printf("onze");}
        else if (unidade == 2){
            printf("doze");}
        else if (unidade == 3){
            printf("treze");}
        else if (unidade == 4){
            printf("quatorze");}
        else if (unidade == 5){
            printf("quinze");}
        else if (unidade == 6){
            printf("dezesseis");}
        else if (unidade == 7){
            printf("dezessete");}
        else if (unidade == 8){
            printf("dezoito");}
        else if (unidade == 9){
            printf("dezenove");}
    }
    
    else {
        if (dezena == 2){
            printf("vinte");}
        else if (dezena == 3){
            printf("trinta");}
        else if (dezena == 4){
            printf("quarenta");}
        else if (dezena == 5){
            printf("cinquenta");}
        else if (dezena == 6){
            printf("sessenta");}
        else if (dezena == 7){
            printf("setenta");}
        else if (dezena == 8){
            printf("oitenta");}
        else if (dezena == 9){
            printf("noventa");}
        
    if (dezena > 1 && unidade > 0) {
            printf(" e ");}
            
    if ( unidade == 1) {
        printf("um");}
        else if (unidade == 2) {
            printf("dois");}
        else if (unidade == 3) {
            printf("três");}
        else if (unidade == 4) {
            printf("quatro");}
        else if (unidade == 5) {
            printf("cinco");}
        else if (unidade == 6) {
            printf("seis");}
        else if (unidade == 7) {
            printf("sete");}
        else if (unidade == 8) {
            printf("oito");}
        else if (unidade == 9) {
            printf("nove");}
    }

}