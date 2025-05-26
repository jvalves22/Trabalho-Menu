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
    printf(
        "   ***   \n"
        " *     * \n"
        "*       *\n"
        "*       *\n"
        " *     * \n"
        "   ***   \n"
    );
}

void figuraLosango() {
    printf(
        "   *   \n"
        "  * *  \n"
        " *   * \n"
        "  * *  \n"
        "   *   \n"
    );
}

void figuraParalelogramo() {
    printf(
        "  ********\n"
        " ******** \n"
        "********  \n"
        "********  \n"
        " ******** \n"
        "  ********\n"
    );
}

void figuraTrapezio() {
    printf(
        "    ******\n"
        "   ********\n"
        "  **********\n"
        " ************\n"
        "**************\n"
    );
}

void figuraTriangulo() {
    printf(
        "    *    \n"
        "   * *   \n"
        "  *   *  \n"
        " *     * \n"
        "*********\n"
    );
}

void figuraEsfera() {
    printf(
        "   ***   \n"
        " *     * \n"
        "*       *\n"
        "*       *\n"
        " *     * \n"
        "   ***   \n"
    );
}

void figuraCone() {
    printf(
        "    *    \n"
        "   ***   \n"
        "  *****  \n"
        " ******* \n"
        "*********\n"
        "    |    \n"
        "    |    \n"
    );
}

void figuraCilindro() {
    printf(
        "  *****  \n"
        " *     * \n"
        " *     * \n"
        " *     * \n"
        "  *****  \n"
        "  *****  \n"
        " *     * \n"
        " *     * \n"
        "  *****  \n"
    );
}

void figuraParalelepipedo() {
    printf(
        "***********\n"
        "*         *\n"
        "*         *\n"
        "*         *\n"
        "***********\n"
    );
}

void figuraMetrosJardas() {
    printf("[m] <--> [yd]\n");
}

void figuraCmPol() {
    printf("[cm³] <--> [in³]\n");
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
        "╔══════════════════════════════════════════════╗\n"
        "║  %s\n"
        "╚══════════════════════════════════════════════╝\n", titulo);
}

void pausar() {
    printf("\nPressione <ENTER> para continuar...");
    getch();
}

void menuPrincipal() {
    cabecalho(" CALCULADORA GEOMÉTRICA ");
    printf(
        "1 - Calcular ÁREA de figuras planas\n"
        "2 - Calcular VOLUME de sólidos geométricos\n"
        "3 - Conversão de MEDIDAS\n"
        "4 - Sair\n"
        "Escolha: ");
}

void menuArea() {
    cabecalho(" ÁREA DE FIGURAS PLANAS");
    printf(
        "1 - Círculo\n"
        "2 - Losango\n"
        "3 - Paralelogramo\n"
        "4 - Trapézio\n"
        "5 - Triângulo\n"
        "0 - Voltar\n"
        "Escolha: ");
}

void menuVolume() {
    cabecalho(" VOLUME DE SÓLIDOS GEOMÉTRICOS");
    printf(
        "1 - Esfera\n"
        "2 - Cone\n"
        "3 - Cilindro\n"
        "4 - Paralelepípedo\n"
        "0 - Voltar\n"
        "Escolha: ");
}

void menuConversao() {
    cabecalho(" CONVERSÃO DE MEDIDAS");
    printf(
        "1 - Metros -> Jardas\t5 - Litros -> Galões\n"
        "2 - Jardas -> Metros\t6 - Galões -> Litros\n"
        "3 - cm³ -> pol³\t7 - Kg -> Libras\n"
        "4 - pol³ -> cm³\t8 - Libras -> Kg\n"
        "0 - Voltar\n"
        "Escolha: ");
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
                printf("Diâmetro do círculo: "); scanf("%f", &a);
                res = circulo(a);
                printf("Área do círculo: %.2f\n", res);
                break;
            case 2:
                figuraLosango();
                printf("Diagonal 1: "); scanf("%f", &a);
                printf("Diagonal 2: "); scanf("%f", &b);
                res = losango(a, b);
                printf("Área do losango: %.2f\n", res);
                break;
            case 3:
                figuraParalelogramo();
                printf("Base: "); scanf("%f", &a);
                printf("Altura: "); scanf("%f", &b);
                res = paralelogramo(b, a);
                printf("Área do paralelogramo: %.2f\n", res);
                break;
            case 4:
                figuraTrapezio();
                printf("Base maior: "); scanf("%f", &a);
                printf("Base menor: "); scanf("%f", &b);
                printf("Altura: "); scanf("%f", &c);
                res = trapezio(a, b, c);
                printf("Área do trapézio: %.2f\n", res);
                break;
            case 5:
                figuraTriangulo();
                printf("Lado A: "); scanf("%f", &a);
                printf("Lado B: "); scanf("%f", &b);
                printf("Lado C: "); scanf("%f", &c);
                if (a == b && b == c) {
                    res = triangulo_equi(a);
                    printf("Área do triângulo equilátero: %.2f\n", res);
                } else {
                    printf("Base: "); scanf("%f", &a);
                    printf("Altura: "); scanf("%f", &b);
                    res = triangulo(a, b);
                    printf("Área do triângulo: %.2f\n", res);
                }
                break;
            case 0: break;
            default: printf("Opção inválida!\n");
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
                printf("Diâmetro da esfera: "); scanf("%f", &a);
                res = esfera(a);
                printf("Volume da esfera: %.2f\n", res);
                break;
            case 2:
                figuraCone();
                printf("Diâmetro da base: "); scanf("%f", &a);
                printf("Altura: "); scanf("%f", &b);
                res = cone(a, b);
                printf("Volume do cone: %.2f\n", res);
                break;
            case 3:
                figuraCilindro();
                printf("Diâmetro da base: "); scanf("%f", &a);
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
                printf("Volume do paralelepípedo: %.2f\n", res);
                break;
            case 0: break;
            default: printf("Opção inválida!\n");
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
                printf("cm³: "); scanf("%f", &num);
                res = cmcub_polcub(num);
                printf("%.2f cm³ = %.2f in³\n", num, res);
                break;
            case 4:
                figuraCmPol();
                printf("in³: "); scanf("%f", &num);
                res = polcub_cmcub(num);
                printf("%.2f in³ = %.2f cm³\n", num, res);
                break;
            case 5:
                figuraLitrosGaloes();
                printf("Litros: "); scanf("%f", &num);
                res = l_gl(num);
                printf("%.2f L = %.2f gal\n", num, res);
                break;
            case 6:
                figuraLitrosGaloes();
                printf("Galões: "); scanf("%f", &num);
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
            default: printf("Opção inválida!\n");
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
                printf("Opção inválida!\n");
                pausar();
        }
    } while (opc != 4);
    cabecalho("🫡 Programa encerrado. Até logo!");
    return 0;
}
