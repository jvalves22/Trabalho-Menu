#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define PI 3.14159265

float circulo(float dia) {
    float r = dia / 2;
    return PI * r * r;
}

float losango(float D1, float D2) {
    return (D1 * D2) / 2;
}

float paralelogramo(float alt, float base) {
    return base * alt;
}

float trapezio(float B_maior, float b_menor, float alt) {
    return ((B_maior + b_menor) / 2) * alt;
}

float triangulo_equi(float lado) {
    return (lado * lado * sqrt(3)) / 4;
}

float triangulo(float base, float alt) {
    return (base * alt) / 2;
}

float esfera(float dia) {
    float r = dia / 2;
    return (4.0 * PI * r * r * r) / 3.0;
}

float cone(float dia, float alt) {
    float r = dia / 2;
    return (PI * r * r * alt) / 3.0;
}

float cilindro(float dia, float alt) {
    float r = dia / 2;
    return PI * r * r * alt;
}

float paralelepipedo(float comp, float larg, float alt) {
    return comp * larg * alt;
}

float m_j(float num) {
     return num * 1.09361; 
}

float j_m(float num) { 
    return num / 1.09361; 
}

float cmcub_polcub(float num) {
     return num / 16.387064; 
}

float polcub_cmcub(float num) {
     return num * 16.387064; 
}

float l_gl(float num) { 
    return num * 0.2642; 
}

float gl_l(float num) { 
    return num / 0.2642; 
}

float kg_lib(float num) { 
    return num * 2.20462262; 
}

float lib_kg(float num) { 
    return num / 2.20462262; 
}


void figuraCirculo() {
    int raio = 10;
    float proporcao = 2.0; 
    float espessura = 0.4; 

    for (float y = raio; y >= -raio; y--) {
        for (float x = -raio * proporcao; x <= raio * proporcao; x++) {
            float equacao = (x / proporcao) * (x / proporcao) + y * y;
            if (equacao >= (raio - espessura) * (raio - espessura) &&
                equacao <= (raio + espessura) * (raio + espessura)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void figuraLosango() {
    int altura = 5;
    for (int i = -altura; i <= altura; i++) {
        int espacos = abs(i);
        int asteriscos = altura - espacos + 1;

        for (int j = 0; j < espacos; j++) printf(" ");
        printf("*");
        if (asteriscos > 1) {
            for (int j = 0; j < (asteriscos - 1) * 2 - 1; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
}

void figuraParalelogramo() {
    int linhas = 6;
    int colunas = 12;
    for (int i = 0; i < linhas; i++) {
        for (int e = 0; e < linhas - i - 1; e++) printf(" ");
        for (int j = 0; j < colunas; j++) printf("*");
        printf("\n");
    }
}

void figuraTrapezio() {
    int linhas = 5;
    int baseMaior = 14;
    int baseMenor = 6;
    int incremento = (baseMaior - baseMenor) / (linhas - 1);

    for (int i = 0; i < linhas; i++) {
        int largura = baseMenor + i * incremento;
        for (int e = 0; e < (baseMaior - largura) / 2; e++) printf(" ");
        for (int j = 0; j < largura; j++) printf("*");
        printf("\n");
    }
}

void figuraTriangulo() {
    int altura = 6;
    for (int i = 0; i < altura; i++) {
        for (int e = 0; e < altura - i - 1; e++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) {
            if (i == altura - 1 || j == 0 || j == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void figuraEsfera() {
    figuraCirculo();
}

void figuraCone() {
    int altura = 6;
    for (int i = 0; i < altura; i++) {
        for (int e = 0; e < altura - i - 1; e++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("*");
        printf("\n");
    }
    for (int i = 0; i < 2; i++) {
        for (int e = 0; e < altura; e++) printf(" ");
        printf("|\n");
    }
}
void figuraCilindro() {
    int altura = 6;
    int largura = 12;

    for (int i = 0; i < largura; i++) printf("*");
    printf("\n");
   
    for (int i = 0; i < altura; i++) {
        printf("*");
        for (int j = 0; j < largura - 2; j++) printf(" ");
        printf("*\n");
    }

    for (int i = 0; i < largura; i++) printf("*");
    printf("\n");
}
void figuraParalelepipedo() {
    int linhas = 6;
    int colunas = 14;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == 0 || i == linhas - 1 || j == 0 || j == colunas - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void figuraMetrosJardas() {
    printf("[m] <--> [yd]\n");
}

void figuraCmPol() {
    printf("[cm3] <--> [in3]\n");
}

void figuraLitrosGaloes() {
    printf("[L] <--> [gal]\n");
}

void figuraKgLibras() {
    printf("[kg] <--> [lb]\n");
}

void cabecalho(const char *titulo) {
    system("cls"); 
    printf(
        "===========================================================================================\n"
        "==="	"\t\t\t\t%s" "\t\t\t\t===\n"						 
        "===========================================================================================\n", titulo);
}

void pausar() {
    printf("\nPressione <ENTER> para continuar...");
    getch();
}

void menuPrincipal() {
    cabecalho(" CALCULADORA GEOMETRICA ");
    printf(
        "\n\t\t\t 1 - Calcular Area de figuras planas\n"
        "\t\t\t 2 - Calcular VOLUME de solidos geometricos\n"
        "\t\t\t 3 - Conversao de MEDIDAS\n"
        "\t\t\t 4 - Sair\n"
        "\n\t\t\t Escolha: ");
}

void menuArea() {
    cabecalho(" AREAS DE FIGURAS PLANAS");
    printf(
        "\n\t\t\t\t 1 - Circulo\n"
        "\t\t\t\t 2 - Losango\n"
        "\t\t\t\t 3 - Paralelogramo\n"
        "\t\t\t\t 4 - Trapezio\n"
        "\t\t\t\t 5 - Triangulo\n"
        "\t\t\t\t 0 - Voltar\n"
        "\n\t\t\t\t Escolha: ");
}

void menuVolume() {
    cabecalho(" VOLUME DE SOLIDOS GEOMETRICOS");
    printf(
        "\n\t\t\t\t 1 - Esfera\n"
        "\t\t\t\t 2 - Cone\n"
        "\t\t\t\t 3 - Cilindro\n"
        "\t\t\t\t 4 - Paralelepipedo\n"
        "\t\t\t\t 0 - Voltar\n"
        "\n\t\t\t\t Escolha: ");
}

void menuConversao() {
    cabecalho(" CONVERSAO DE MEDIDAS");
    printf(
        "\n\t\t 1 - Metros -> Jardas \t\t 5 - Litros -> Galoes\n"
        "\t\t 2 - Jardas -> Metros \t\t 6 - Galoes -> Litros\n"
        "\t\t 3 - cm3 -> pol3 \t\t 7 - Kg -> Libras\n"
        "\t\t 4 - pol3 -> cm3 \t\t 8 - Libras -> Kg\n"
        "\n\t\t 0 - Voltar\n"
        "\n\t\t\t Escolha: ");
}

void executarArea() {
    int opc;
    float a, b, c, res;
    do {
        menuArea();
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                figuraCirculo();
                printf("Diametro do circulo: "); scanf("%f", &a);
                res = circulo(a);
                printf("Área do circulo: %.2f\n", res);
                break;
            case 2:
                figuraLosango();
                printf("Diagonal 1: "); scanf("%f", &a);
                printf("Diagonal 2: "); scanf("%f", &b);
                res = losango(a, b);
                printf("Area do losango: %.2f\n", res);
                break;
            case 3:
                figuraParalelogramo();
                printf("Base: "); scanf("%f", &a);
                printf("Altura: "); scanf("%f", &b);
                res = paralelogramo(b, a);
                printf("Area do paralelogramo: %.2f\n", res);
                break;
            case 4:
                figuraTrapezio();
                printf("Base maior: "); scanf("%f", &a);
                printf("Base menor: "); scanf("%f", &b);
                printf("Altura: "); scanf("%f", &c);
                res = trapezio(a, b, c);
                printf("Area do trapezio: %.2f\n", res);
                break;
            case 5:
                figuraTriangulo();
                printf("Lado A: "); scanf("%f", &a);
                printf("Lado B: "); scanf("%f", &b);
                printf("Lado C: "); scanf("%f", &c);
                if (a == b && b == c) {
                    res = triangulo_equi(a);
                    printf("Area do triangulo equilatero: %.2f\n", res);
                } else {
                    printf("Base: "); scanf("%f", &a);
                    printf("Altura: "); scanf("%f", &b);
                    res = triangulo(a, b);
                    printf("Area do triangulo: %.2f\n", res);
                }
                break;
            case 0: break;
            default: printf("Opcao invalida!\n");
        }
        if (opc != 0) pausar();
    } while (opc != 0);
}

void executarVolume() {
    int opc;
    float a, b, c, res;
    do {
        menuVolume();
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                figuraEsfera();
                printf("Diametro da esfera: "); scanf("%f", &a);
                res = esfera(a);
                printf("Volume da esfera: %.2f\n", res);
                break;
            case 2:
                figuraCone();
                printf("Diametro da base: "); scanf("%f", &a);
                printf("Altura: "); scanf("%f", &b);
                res = cone(a, b);
                printf("Volume do cone: %.2f\n", res);
                break;
            case 3:
                figuraCilindro();
                printf("Diametro da base: "); scanf("%f", &a);
                printf("Altura: "); scanf("%f", &b);
                res = cilindro(a, b);
                printf("Volume do cilindro: %.2f\n", res);
                break;
            case 4:
                figuraParalelepipedo();
                printf("Comprimento: "); scanf("%f", &a);
                printf("Largura: "); scanf("%f", &b);
                printf("Altura: "); scanf("%f", &c);
                res = paralelepipedo(a, b, c);
                printf("Volume do paralelepipedo: %.2f\n", res);
                break;
            case 0: break;
            default: printf("Opcaoo invalida!\n");
        }
        if (opc != 0) pausar();
    } while (opc != 0);
}

void executarConversao() {
    int opc;
    float num, res;
    do {
        menuConversao();
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                figuraMetrosJardas();
                printf("Metros: "); scanf("%f", &num);
                res = m_j(num);
                printf("%.2f m = %.2f yd\n", num, res);
                break;
            case 2:
                figuraMetrosJardas();
                printf("Jardas: "); scanf("%f", &num);
                res = j_m(num);
                printf("%.2f yd = %.2f m\n", num, res);
                break;
            case 3:
                figuraCmPol();
                printf("cm?: "); scanf("%f", &num);
                res = cmcub_polcub(num);
                printf("%.2f cm3 = %.2f in3\n", num, res);
                break;
            case 4:
                figuraCmPol();
                printf("in?: "); scanf("%f", &num);
                res = polcub_cmcub(num);
                printf("%.2f in3 = %.2f cm3\n", num, res);
                break;
            case 5:
                figuraLitrosGaloes();
                printf("Litros: "); scanf("%f", &num);
                res = l_gl(num);
                printf("%.2f L = %.2f gal\n", num, res);
                break;
            case 6:
                figuraLitrosGaloes();
                printf("Galoes: "); scanf("%f", &num);
                res = gl_l(num);
                printf("%.2f gal = %.2f L\n", num, res);
                break;
            case 7:
                figuraKgLibras();
                printf("Kg: "); scanf("%f", &num);
                res = kg_lib(num);
                printf("%.2f kg = %.2f lb\n", num, res);
                break;
            case 8:
                figuraKgLibras();
                printf("Libras: "); scanf("%f", &num);
                res = lib_kg(num);
                printf("%.2f lb = %.2f kg\n", num, res);
                break;
            case 0: break;
            default: printf("Opcao invalida!\n");
        }
        if (opc != 0) pausar();
    } while (opc != 0);
}

int main() {
    int opc;
    do {
        menuPrincipal();
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                executarArea();
                break;
            case 2:
                executarVolume();
                break;
            case 3:
                executarConversao();
                break;
            case 4: break;
            default:
                printf("Opcao invalida!\n");
                pausar();
        }
    } while (opc != 4);
    cabecalho("Programa encerrado. Ate logo!");
    return 0;
}
