#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

// Funções de cálculo
float circulo(float dia) { float r = dia / 2; return PI * r * r; }
float losango(float D1, float D2) { return (D1 * D2) / 2; }
float paralelogramo(float alt, float base) { return base * alt; }
float trapezio(float B_maior, float b_menor, float alt) { return ((B_maior + b_menor) / 2) * alt; }
float triangulo_equi(float lado) { return (lado * lado * sqrt(3)) / 4; }
float triangulo(float base, float alt) { return (base * alt) / 2; }
float esfera(float dia) { float r = dia / 2; return (4.0 * PI * r * r * r) / 3.0; }
float cone(float dia, float alt) { float r = dia / 2; return (PI * r * r * alt) / 3.0; }
float cilindro(float dia, float alt) { float r = dia / 2; return PI * r * r * alt; }
float paralelepipedo(float comp, float larg, float alt) { return comp * larg * alt; }
float m_j(float num) { return num * 1.09361; }
float j_m(float num) { return num / 1.09361; }
float cmcub_polcub(float num) { return num / 16.387064; }
float polcub_cmcub(float num) { return num * 16.387064; }
float l_gl(float num) { return num * 0.2642; }
float gl_l(float num) { return num / 0.2642; }
float kg_lib(float num) { return num * 2.20462262; }
float lib_kg(float num) { return num / 2.20462262; }

// Funções de figuras ASCII
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
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        printf("*");
        if (asteriscos > 1) {
            for (int j = 0; j < (asteriscos - 1) * 2 - 1; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}
void figuraParalelogramo() {
    int linhas = 6, colunas = 12;
    for (int i = 0; i < linhas; i++) {
        for (int e = 0; e < linhas - i - 1; e++) printf(" ");
        for (int j = 0; j < colunas; j++) printf("*");
        printf("\n");
    }
}
void figuraTrapezio() {
    int linhas = 5, baseMaior = 14, baseMenor = 6;
    int incremento = (baseMaior - baseMenor) / (linhas - 1);
    for (int i = 0; i < linhas; i++) {
        int largura = baseMenor + i * incremento;
        for (int e = 0; e < (baseMaior - largura) / 2; e++) {
            printf(" ");
        }
        for (int j = 0; j < largura; j++) {
            printf("*");
        }
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
    int altura = 6, troncoAltura = 2, troncoLargura = 2;
    for (int i = 0; i < altura; i++) {
        for (int e = 0; e < altura - i - 1; e++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("*");
        printf("\n");
    }
    for (int i = 0; i < troncoAltura; i++) {
        for (int e = 0; e < altura - troncoLargura / 2; e++) printf(" ");
        for (int j = 0; j < troncoLargura; j++) printf("|");
        printf("\n");
    }
}
void figuraCilindro() {
    int altura = 6, largura = 12;
    for (int i = 0; i < largura; i++) {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < altura - 2; i++) {
        printf("*");
        for (int j = 0; j < largura - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    for (int i = 0; i < largura; i++) {
        printf("*");
    }
    printf("\n");
}
void figuraParalelepipedo() {
    int altura = 6, largura = 32;
    for (int i = 0; i < largura; i++) {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < altura - 2; i++) {
        printf("*");
        for (int j = 0; j < largura - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    for (int i = 0; i < largura; i++) {
        printf("*");
    }
    printf("\n");
}
// Funções de processamento de cada operação
void processarCirculo() {
    figuraCirculo();
    float diam;
    printf("Diametro do circulo: ");
    scanf("%f", &diam);
    printf("Area do circulo: %.2f\n", circulo(diam));
}
void processarLosango() {
    figuraLosango();
    float d1, d2;
    printf("Diagonal 1: "); scanf("%f", &d1);
    printf("Diagonal 2: "); scanf("%f", &d2);
    printf("Area do losango: %.2f\n", losango(d1, d2));
}
void processarParalelogramo() {
    figuraParalelogramo();
    float base, alt;
    printf("Base: "); scanf("%f", &base);
    printf("Altura: "); scanf("%f", &alt);
    printf("Area do paralelogramo: %.2f\n", paralelogramo(alt, base));
}
void processarTrapezio() {
    figuraTrapezio();
    float bmaior, bmenor, alt;
    printf("Base maior: "); scanf("%f", &bmaior);
    printf("Base menor: "); scanf("%f", &bmenor);
    printf("Altura: "); scanf("%f", &alt);
    printf("Area do trapezio: %.2f\n", trapezio(bmaior, bmenor, alt));
}
void processarTriangulo() {
    figuraTriangulo();
    float a, b, c;
    printf("Lado A: "); scanf("%f", &a);
    printf("Lado B: "); scanf("%f", &b);
    printf("Lado C: "); scanf("%f", &c);
    if (a == b && b == c) {
        printf("Area do triangulo equilatero: %.2f\n", triangulo_equi(a));
    } else {
        printf("Base: "); scanf("%f", &a);
        printf("Altura: "); scanf("%f", &b);
        printf("Area do triangulo: %.2f\n", triangulo(a, b));
    }
}
void processarEsfera() {
    figuraEsfera();
    float d;
    printf("Diametro da esfera: "); scanf("%f", &d);
    printf("Volume da esfera: %.2f\n", esfera(d));
}
void processarCone() {
    figuraCone();
    float d, alt;
    printf("Diametro da base: "); scanf("%f", &d);
    printf("Altura: "); scanf("%f", &alt);
    printf("Volume do cone: %.2f\n", cone(d, alt));
}
void processarCilindro() {
    figuraCilindro();
    float d, alt;
    printf("Diametro da base: "); scanf("%f", &d);
    printf("Altura: "); scanf("%f", &alt);
    printf("Volume do cilindro: %.2f\n", cilindro(d, alt));
}
void processarParalelepipedo() {
    figuraParalelepipedo();
    float comp, larg, alt;
    printf("Comprimento: "); scanf("%f", &comp);
    printf("Largura: "); scanf("%f", &larg);
    printf("Altura: "); scanf("%f", &alt);
    printf("Volume do paralelepipedo: %.2f\n", paralelepipedo(comp, larg, alt));
}
void processarMetrosJardas() {
    float m;
    printf("Metros: "); scanf("%f", &m);
    printf("%.2f m = %.2f yd\n", m, m_j(m));
}
void processarJardasMetros() {
    float yd;
    printf("Jardas: "); scanf("%f", &yd);
    printf("%.2f yd = %.2f m\n", yd, j_m(yd));
}
void processarCmPol() {
    float cm3;
    printf("cm3: "); scanf("%f", &cm3);
    printf("%.2f cm3 = %.2f in3\n", cm3, cmcub_polcub(cm3));
}
void processarPolCm() {
    float in3;
    printf("in3: "); scanf("%f", &in3);
    printf("%.2f in3 = %.2f cm3\n", in3, polcub_cmcub(in3));
}
void processarLitrosGaloes() {
    float l;
    printf("Litros: "); scanf("%f", &l);
    printf("%.2f L = %.2f gal\n", l, l_gl(l));
}
void processarGaloesLitros() {
    float gal;
    printf("Galoes: "); scanf("%f", &gal);
    printf("%.2f gal = %.2f L\n", gal, gl_l(gal));
}
void processarKgLibras() {
    float kg;
    printf("Kg: "); scanf("%f", &kg);
    printf("%.2f kg = %.2f lb\n", kg, kg_lib(kg));
}
void processarLibrasKg() {
    float lb;
    printf("Libras: "); scanf("%f", &lb);
    printf("%.2f lb = %.2f kg\n", lb, lib_kg(lb));
}
void processarDolarParaReal() {
    float dolar, cotacao = 5.56;
    printf("Digite o valor em dólares (US$): ");
    scanf("%f", &dolar);
    printf("Cotação do dólar: %.2f\n", cotacao);
    printf("Valor em reais: R$ %.2f\n", dolar * cotacao);
}
void processarEuroParaReal() {
    float euro, cotacao = 6.02;
    printf("Digite o valor em euros (€): ");
    scanf("%f", &euro);
    printf("Cotação do euro: %.2f\n", cotacao);
    printf("Valor em reais: R$ %.2f\n", euro * cotacao);
}

// Utilitários
void cabecalho(const char * titulo) {
    system("clear");
    printf(
        "===========================================================================================\n"
        "===\t\t\t\t%s\t\t\t\t===\n"
        "===========================================================================================\n", titulo);
}
void pausar() {
    printf("\nPressione <ENTER> para continuar...");
    getchar();
    getchar();
}

// Menus
void menuPrincipal() {
    cabecalho(" CALCULADORA GEOMETRICA E CONVERSOR DE MOEDAS ");
    printf(
        "\n\t\t\t 1 - Calcular Area de figuras planas\n"
        "\t\t\t 2 - Calcular VOLUME de solidos geometricos\n"
        "\t\t\t 3 - Conversao de MEDIDAS\n"
        "\t\t\t 4 - Conversao de MOEDAS\n"
        "\t\t\t 5 - Sair\n"
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
void menuConMoedas() {
    cabecalho(" CONVERSAO DE MOEDAS");
    printf(
        "\n\t\t 1 - Dolar -> Reais"
        "\t\t 2 - Euro -> Reais"
        "\n\t\t 3 - Voltar\n"
        "\n\t\t\t Escolha: ");
}

// Execução dos menus
void executarArea() {
    int opc;
    do {
        menuArea();
        scanf("%d", &opc);
        switch (opc) {
            case 1: processarCirculo(); break;
            case 2: processarLosango(); break;
            case 3: processarParalelogramo(); break;
            case 4: processarTrapezio(); break;
            case 5: processarTriangulo(); break;
            case 0: break;
            default: printf("Opcao invalida!\n");
        }
        if (opc != 0) pausar();
    } while (opc != 0);
}
void executarVolume() {
    int opc;
    do {
        menuVolume();
        scanf("%d", &opc);
        switch (opc) {
            case 1: processarEsfera(); break;
            case 2: processarCone(); break;
            case 3: processarCilindro(); break;
            case 4: processarParalelepipedo(); break;
            case 0: break;
            default: printf("Opcao invalida!\n");
        }
        if (opc != 0) pausar();
    } while (opc != 0);
}
void executarConversao() {
    int opc;
    do {
        menuConversao();
        scanf("%d", &opc);
        switch (opc) {
            case 1: processarMetrosJardas(); break;
            case 2: processarJardasMetros(); break;
            case 3: processarCmPol(); break;
            case 4: processarPolCm(); break;
            case 5: processarLitrosGaloes(); break;
            case 6: processarGaloesLitros(); break;
            case 7: processarKgLibras(); break;
            case 8: processarLibrasKg(); break;
            case 0: break;
            default: printf("Opcao invalida!\n");
        }
        if (opc != 0) pausar();
    } while (opc != 0);
}
void executarConMoedas() {
    int opc;
    do {
        menuConMoedas();
        scanf("%d", &opc);
        switch (opc) {
            case 1: processarDolarParaReal(); break;
            case 2: processarEuroParaReal(); break;
            case 3: break;
            default: printf("Opcao invalida!\n");
        }
        if (opc != 3) pausar();
    } while (opc != 3);
}

int main() {
    int opc;
    do {
        menuPrincipal();
        scanf("%d", &opc);
        switch (opc) {
            case 1: executarArea(); break;
            case 2: executarVolume(); break;
            case 3: executarConversao(); break;
            case 4: executarConMoedas(); break;
            case 5: break;
            default: printf("Opcao invalida!\n"); pausar();
        }
    } while (opc != 5);
    cabecalho("Programa encerrado. Ate logo!");
    return 0;
}
