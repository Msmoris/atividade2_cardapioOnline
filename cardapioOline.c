#include <stdio.h>

int main() {
    int escolha;
    int continuar = 1;
    int quantidade;
    float total = 0.0;
    const float desconto_limite = 50.0;
    const float desconto_percentual = 0.10;

    // Variáveis para armazenar quantidades de cada item
    int qtd_pizza = 0, qtd_hamburguer = 0, qtd_salada = 0, qtd_refrigerante = 0;
    int qtd_sorvete = 0, qtd_bolo = 0, qtd_batata = 0, qtd_queijo = 0;

    // Preços dos itens
    const float preco_pizza = 30.0;
    const float preco_hamburguer = 18.0;
    const float preco_salada = 10.0;
    const float preco_refrigerante = 7.50;
    const float preco_sorvete = 5.0;
    const float preco_bolo = 12.0;
    const float preco_batata = 10.0;
    const float preco_queijo = 2.50;

    printf("=== Cardápio Digital ===\n");
    printf("Pratos Principais:\n");
    printf("1. Pizza - R$ 30,00\n");
    printf("2. Hambúrguer - R$ 18,00\n");
    printf("3. Salada - R$ 10,00\n");
    printf("4. Refrigerante - R$ 7,50\n");
    printf("Sobremesas:\n");
    printf("5. Sorvete - R$ 5,00\n");
    printf("6. Bolo - R$ 12,00\n");
    printf("Adicionais:\n");
    printf("7. Batata Frita - R$ 10,00\n");
    printf("8. Queijo Extra - R$ 2,50\n");
    printf("9. Finalizar pedido\n");

    while (continuar) {
        printf("\nEscolha o número do item desejado: ");
        scanf("%d", &escolha);

        if (escolha >= 1 && escolha <= 8) {
            printf("Informe a quantidade: ");
            scanf("%d", &quantidade);
            if (quantidade <= 0) {
                printf("Quantidade inválida. Tente novamente.\n");
                continue;
            }
        }

        switch (escolha) {
            case 1:
                qtd_pizza += quantidade;
                printf("Adicionado %d Pizza(s) ao pedido.\n", quantidade);
                break;
            case 2:
                qtd_hamburguer += quantidade;
                printf("Adicionado %d Hambúrguer(es) ao pedido.\n", quantidade);
                break;
            case 3:
                qtd_salada += quantidade;
                printf("Adicionado %d Salada(s) ao pedido.\n", quantidade);
                break;
            case 4:
                qtd_refrigerante += quantidade;
                printf("Adicionado %d Refrigerante(s) ao pedido.\n", quantidade);
                break;
            case 5:
                qtd_sorvete += quantidade;
                printf("Adicionado %d Sorvete(s) ao pedido.\n", quantidade);
                break;
            case 6:
                qtd_bolo += quantidade;
                printf("Adicionado %d Bolo(s) ao pedido.\n", quantidade);
                break;
            case 7:
                qtd_batata += quantidade;
                printf("Adicionado %d Batata(s) Frita(s) ao pedido.\n", quantidade);
                break;
            case 8:
                qtd_queijo += quantidade;
                printf("Adicionado %d Queijo(s) Extra(s) ao pedido.\n", quantidade);
                break;
            case 9:
                continuar = 0;
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    printf("\n=== Resumo do Pedido ===\n");
    if (qtd_pizza > 0)
        printf("Pizza: %d x R$ %.2f = R$ %.2f\n", qtd_pizza, preco_pizza, qtd_pizza * preco_pizza);
    if (qtd_hamburguer > 0)
        printf("Hambúrguer: %d x R$ %.2f = R$ %.2f\n", qtd_hamburguer, preco_hamburguer, qtd_hamburguer * preco_hamburguer);
    if (qtd_salada > 0)
        printf("Salada: %d x R$ %.2f = R$ %.2f\n", qtd_salada, preco_salada, qtd_salada * preco_salada);
    if (qtd_refrigerante > 0)
        printf("Refrigerante: %d x R$ %.2f = R$ %.2f\n", qtd_refrigerante, preco_refrigerante, qtd_refrigerante * preco_refrigerante);
    if (qtd_sorvete > 0)
        printf("Sorvete: %d x R$ %.2f = R$ %.2f\n", qtd_sorvete, preco_sorvete, qtd_sorvete * preco_sorvete);
    if (qtd_bolo > 0)
        printf("Bolo: %d x R$ %.2f = R$ %.2f\n", qtd_bolo, preco_bolo, qtd_bolo * preco_bolo);
    if (qtd_batata > 0)
        printf("Batata Frita: %d x R$ %.2f = R$ %.2f\n", qtd_batata, preco_batata, qtd_batata * preco_batata);
    if (qtd_queijo > 0)
        printf("Queijo Extra: %d x R$ %.2f = R$ %.2f\n", qtd_queijo, preco_queijo, qtd_queijo * preco_queijo);

    total = (qtd_pizza * preco_pizza) + (qtd_hamburguer * preco_hamburguer) + (qtd_salada * preco_salada) + 
            (qtd_refrigerante * preco_refrigerante) + (qtd_sorvete * preco_sorvete) + (qtd_bolo * preco_bolo) + 
            (qtd_batata * preco_batata) + (qtd_queijo * preco_queijo);

    printf("\nTotal antes do desconto: R$ %.2f\n", total);

    if (total >= desconto_limite) {
        float valor_desconto = total * desconto_percentual;
        float total_com_desconto = total - valor_desconto;
        printf("Parabéns! Você recebeu 10%% de desconto.\n");
        printf("Valor do desconto: R$ %.2f\n", valor_desconto);
        printf("Total a pagar: R$ %.2f\n", total_com_desconto);
    } else {
        printf("Total a pagar: R$ %.2f\n", total);
    }

    printf("\nObrigado pela preferência!\n");

    return 0;
}