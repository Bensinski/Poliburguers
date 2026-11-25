#include <stdio.h>
#include "funciones.h"
int main(int argc, char *argv[]){
    Ingredientes ing[20];
    Productos prod[20];
    Pedidos pedidos[100];
    int op, opc, conting = 0, cont = 0, contped = 0;
    do{
        printf("---Las Poliburguers---\n");
        printf("1. Registrar ingredientes e inventario\n");
        printf("2. Registrar productos del menu\n");
        printf("3. Informacion registrada de producto\n");
        printf("4. Editar informacion\n");
        printf("5. Eliminar producto\n");
        printf("6. Vender (Evaluar pedido)\n");
        printf("7. Actualizar inventario\n");
        printf("8. Consultar existencias finales\n");
        printf("9. Consultar historial de pedidos\n");
        printf("10. Salir\n");
        printf(">> ");
        op = validarfloat(1, 10);
        switch (op)
        {
        case 1:
            ingresoing(ing, &conting);
            break;
        case 2:
            ingresoprod(prod, &cont, ing, conting);
            break;
        case 3:
            mostrarproductos(prod, cont, ing, conting);
            break;
        case 4:
            editarprod(prod, cont, ing, conting);
            break;
        case 5:
            eliminar(prod, &cont);
            break;
        case 6:
            evaluarpedido(prod, cont, ing, conting, pedidos, &contped);
            break;
        case 7:
            actualiv(ing, &conting, prod, cont);
            break;
        case 8:
            existencias(ing, conting);
            break;
        case 9:
            historialpedidos(pedidos, contped);
            break;    
            case 10:
            return 0;
        default:
            break;
        }

        printf("\nDesea volver al menu principal? 1.Si / 2.No\n");
        printf(">> ");
        opc = validarfloat(1, 2);
    } while (opc == 1);
    return 0;
}