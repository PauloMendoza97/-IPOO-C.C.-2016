#include <stdlib.h>
#include <stdio.h>

//structura
typedef struct nodo{
    int val;
    struct nodo *next;
}_nodo;

//Función para crear una lista
_nodo *crear_lista(int n)
{
    int i;
    _nodo *head,*prev,*cur;
    if(n>0)
    {
        head=malloc(sizeof(_nodo));
        head->val=1;
        prev=head;

        for(i=2;i<=n;i++)
        {
            cur=malloc(sizeof(_nodo));
            cur->val=i;
            prev->next=cur;
            prev=cur;
        }
        prev->next=NULL;
        return head;
    }
    else return 0;
}

//Función para imprimir una lista
void imprimir_lista(_nodo *temp)
{
    _nodo *t;
    t=temp;
    while(t!=NULL)
    {
        printf("%d; ",t->val);
        t=t->next;
    }
}

//Función para borrar un nodo
void borrar_nodo(_nodo **temp1,_nodo *temp, int key)
{
    _nodo *cur,*prev;
    prev=temp;
    if(prev->val==key)
    {
        _nodo *cur=*temp1;
        *temp1=cur->next;
        free(cur);
    }
    else{
        cur=temp->next;
        while(cur!=NULL)
        {
            if(cur->val==key)
            {
                prev->next=cur->next;
                free(cur);
                break;
            }
            prev=cur;
            cur=cur->next;
        }
    }
}


//Insertar nodo en el inicio de una lista
_nodo *insertar_nodoinicio(_nodo *temp,int n)
{
    _nodo *adicional;
    adicional=malloc(sizeof(_nodo));
    adicional->val=n;
    adicional->next=temp;

    return adicional;
}

//*Función para hallar la cantidad de listas
int cantidad(_nodo *temp)
{
    int i=0;
    _nodo *cur;
    cur=temp;
    while(cur!=NULL)
    {
        ++i;
        cur=cur->next;
    }
    return i;
}

//Insertar nodo en el medio de una lista
_nodo *insertar_nodomedio(_nodo *temp, int n)
{
    int i;
    _nodo *adicional,*cur;
    adicional=malloc(sizeof(_nodo));
    adicional->val=n;
    cur=temp;

    for(i=2;i<=((cantidad(temp)/2));i++)
        cur=cur->next;
    adicional->next=cur->next;
    cur->next=adicional;

    return cur;
}

//Función para ordenar listas
void ordenar_listas(_nodo *temp)
{
    _nodo *prev,*cur;
    int i,j,mayor,cant;
    cant=cantidad(temp);

    for(i=0;i<cantidad(temp);i++,cant--)
    {
        prev=temp;
        cur=temp->next;
        for(j=1;j<cant;j++)
        {
            if(prev->val > cur->val)
            {
                mayor=prev->val;
                prev->val=cur->val;
                cur->val=mayor;
            }
            cur=cur->next;
            prev=prev->next;
        }
    }
}

//función para concatenar listas
void concatenar_listas(_nodo *temp_1,_nodo *temp_2)
{
    int i;
    _nodo *a,*b;
    a=temp_1;
    b=temp_2;

    for(i=2;i<=cantidad(temp_1);i++)
        a=a->next;
    a->next=b;
}

//Iniciar función main
int main()
{
    _nodo *Primero=crear_lista(5);
    _nodo *Segundo=crear_lista(3);

    printf("\nImprimir listas: \t");
    imprimir_lista(Primero);
    printf("\t\t");
    imprimir_lista(Segundo);
    printf("\n\nBorrar nodo 1: \t");
    borrar_nodo(&Primero,Primero,1);
    imprimir_lista(Primero);
    printf("\n\nInsertar nodo 23 al inicio: \t");
    imprimir_lista(insertar_nodoinicio(Segundo,23));
    printf("\n\nInsertar nodo 8 al medio: \t");
    insertar_nodomedio(Primero,8);
    imprimir_lista(Primero);
    printf("\n\nConcatenar listas: \t");
    concatenar_listas(Segundo,Primero);
    imprimir_lista(Segundo);
    printf("\n\nOrdenar listas: \t");
    ordenar_listas(Segundo);
    imprimir_lista(Segundo);
    printf("\n");

    return 0;
}


