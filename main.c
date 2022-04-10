#include <stdio.h>

char type,size,a,d;
void menu()
{
    printf("\n\n\t    =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n\t    |#>\t\t\t\t\t\t\t\t    <#|\n");
    printf("\t      |#>      >>>>>>>>>>>>>__WELCOME TO\t\t\t  <#|\n\t\t|#>\t\t\t\t\t\t\t<#|\n\t      |#>\t\t\t FOOD CORNER__<<<<<<<<<<<<<    \t  <#|\n\t    |#>\t\t\t\t\t\t\t\t    <#|\n");
    printf("\t    =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n\n\n");
    printf("\n\t\t\t       ======__ _M E N U_ __====== \t\n\n");
    printf(" _________________________________________________________________________________________\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |  - Pizza ---------------------------------------------------------------------        |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\t\tName\t\t\t\tSmall\t\t\tLarge\t\t |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\tA) Tandoori Chicken\t\t      Rs.600.00\t\t     Rs.1700.00\t\t |\n");
    printf(" |\tB) BBQ Chicken \t\t\t      Rs.700.00\t\t     Rs.1900.00\t\t |\n");
    printf(" |\tC) Veggie Supreme   \t\t      Rs.500.00\t\t     Rs.1500.00\t\t |\n");
    printf(" |_______________________________________________________________________________________|\n\n");
    printf(" _________________________________________________________________________________________\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |  - Fried Rice ---------------------------------------------------------------         |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\t\tName\t\t\t\tPrice\t\t\t\t\t |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\tA) Mix Fried Rice\t\t      Rs.500.00\t\t\t\t\t |\n");
    printf(" |\tB) Chicken Fried Rice\t              Rs.400.00\t\t\t\t\t |\n");
    printf(" |\tC) Chicken Fried Rice\t              Rs.300.00\t\t\t\t\t |\n");
    printf(" |_______________________________________________________________________________________|\n\n");
    printf(" _________________________________________________________________________________________\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |  - Koththu -------------------------------------------------------------------        |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\t\tName\t\t\t\tPrice\t\t\t\t\t |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\tA) Mix Koththu\t\t              Rs.350.00\t\t\t\t\t |\n");
    printf(" |\tB) Chicken Koththu\t\t      Rs.300.00\t\t\t\t\t |\n");
    printf(" |\tC) Veggie Koththu\t\t      Rs.250.00\t\t\t\t\t |\n");
    printf(" |_______________________________________________________________________________________|\n\n");
    printf(" _________________________________________________________________________________________\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |  - Short Eats -------------------------------------------------------------------     |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\t\tName\t\t\t\tPrice\t\t\t\t\t |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\tA) Hot dogs\t\t              Rs.100.00\t\t\t\t\t |\n");
    printf(" |\tB) Rolls\t\t\t      Rs.50.00\t\t\t\t\t |\n");
    printf(" |\tC) Pastry\t\t\t      Rs.60.00\t\t\t\t\t |\n");
    printf(" |\tD) Doughnut\t\t              Rs.60.00\t\t\t\t\t |\n");
    printf(" |\tE) Sandwich\t\t\t      Rs.100.00\t\t\t\t\t |\n");
    printf(" |_______________________________________________________________________________________|\n\n");
    printf(" _________________________________________________________________________________________\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |  - Soft drinks ----------------------------------------------------------------       |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\t\tName\t\t\t\tPrice\t\t\t\t\t |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\tA) Coca-Cola\t\t              Rs.60.00\t\t\t\t\t |\n");
    printf(" |\tB) Sprite    \t\t              Rs.65.00\t\t\t\t\t |\n");
    printf(" |\tC) CreamSoda\t\t              Rs.55.00\t\t\t\t\t |\n");
    printf(" |\tD) Pepsi  \t\t              Rs.60.00\t\t\t\t\t |\n");
    printf(" |\tE) 7Up   \t\t              Rs.60.00\t\t\t\t\t |\n");
    printf(" |_______________________________________________________________________________________|\n\n");
    printf(" _________________________________________________________________________________________\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |  - Desserts ----------------------------------------------------------------          |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\t\tName\t\t\t\tPrice\t\t\t\t\t |\n |\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf(" |\tA) Fruit Salads\t\t              Rs.150.00\t\t\t\t\t |\n");
    printf(" |\tB) Watalappan    \t              Rs.100.00\t\t\t\t\t |\n");
    printf(" |\tC) Caramel Pudding\t              Rs.100.00\t\t\t\t\t |\n");
    printf(" |\tD) Yaughurt  \t\t              Rs.40.00\t\t\t\t\t |\n");
    printf(" |\tE) Ice-Cream   \t\t              Rs.60.00\t\t\t\t\t |\n");
    printf(" |_______________________________________________________________________________________|\n\n\n");
    printf(" __________________________________________________________________________________________\n ");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n ");
    printf("******************************************************************************************\n ");
}

char Size()
{
   printf(" \n\n                      Choose Size\n");
      printf("                   ____________________\n\n");
      printf("                      [S]. Small\n");
      printf("                      [L]. Large\n\n");
      printf("                  Enter size : ");
scanf("%s",&size);
return size;
}

int pizzaOrder()
{
    int noOf_Items=0;
  printf("How many pizzas you want - ");
                scanf("%d",&noOf_Items);
printf("--> Item added to your cart <--\n\n");
 return noOf_Items;
}

 int pizza()
 {  int price,tot1;
    price=0; tot1=0;
  printf("Do you want to buy some pizzas (Y/N) - ");
  scanf("%s",&d);

   if (d=='Y')
   {
    do
    {
        price=0;
     printf(" \n                      Choose Favorite\n");
     printf("                   -------------------------\n\n");
     printf("                      [A]. Tandoori Chicken\n");
     printf("                      [B]. BBQ Chicken\n");
     printf("                      [C]. Veggie Supreme\n");
     printf("\n               Enter your favorite : ");
        scanf("%s",&type);

        if (type=='A')
        {
          Size();
            if (size=='S')
            {
                price=600*pizzaOrder();
            }
            else if (size=='L')
            {
                price=1700*pizzaOrder();
            }
            else
            {
                printf("--> Invalid Input <--\n");
            }
        }
        else if (type=='B')
        {
            Size();
            if (size=='S')
            {
                price=700*pizzaOrder();
            }
            else if (size=='L')
            {
                price=1900*pizzaOrder();
            }
            else
            {
                printf("--> Invalid Input <--\n");
            }
        }
        else if (type=='C')
        {
            Size();
            if (size=='S')
            {
                price=500*pizzaOrder();
            }
            else if (size=='L')
            {
                price=1500*pizzaOrder();
            }
            else
            {
                printf("--> Invalid Input <--\n");
            }
        }
        else
        {
            printf("--> Invalid Input <--\n");
            tot1=tot1+price;
        }
        tot1=tot1+price;
        printf("Is there any pizza you want to order (Y/N) - ");
        scanf("%s",&a);
     } while(a=='Y');

   }
    else if (d=='N')
   {
      return tot1;
   }
   else
   {
      printf("--> Invalid Input <--\n");
      pizza();
   }
   return tot1;
 }

 int riceOrder()
 {
    int noOf_Items=0;
      printf("How many plates do you want - ");
            scanf("%d",&noOf_Items);
         printf("--> Item added to your cart <--\n\n");
         return noOf_Items;
 }

int rice()
 {  int price,noOf_Items,tot2;

    price=0; tot2=0;

   printf("\nDo you want to buy any fried rice (Y/N) - ");
   scanf("%s",&d);

  if (d=='Y')
   {
    do
    {   price=0;

        printf(" \n                      Choose Favorite\n");
     printf("                   -------------------------\n\n");
     printf("                      [A]. Mix Fried Rise\n");
     printf("                      [B]. Chicken Fried Rise\n");
     printf("                      [C]. Veggie Fried Rise\n");
     printf("\n               Enter your favorite : ");
        scanf("%s",&type);

        if (type=='A')
        {
            price=500*riceOrder();
        }
        else if (type=='B')
        {
            price=400*riceOrder();
        }
        else if (type=='C')
        {
            price=300*riceOrder();
        }
        else
        {
            printf("--> Invalid Input <--\n");
        }
        tot2=tot2+price;
        printf("Is there any fried rice you want to order (Y/N) - ");
        scanf("%s",&a);
     }while (a=='Y');
   }
   else if (d=='N')
   {
       return tot2;
   }
   else
   {
       printf("--> Invalid Input <--");
       rice();
   }
   return tot2;
 }

 int koththuOrder()
 {
    int noOf_Items=0;
    printf("How many plates do you want - ");
            scanf("%d",&noOf_Items);
            printf("--> Item added to your cart <--\n\n");
            return noOf_Items;
 }

  int koththu()
 {
    int price,tot3;
    price=0; tot3=0;
   printf("\nDo you want to buy Koththu? (Y/N) : ");
   scanf("%s",&d);

  if (d=='Y')
   {
    do
    {   price=0;
        printf(" \n                      Choose Favorite\n");
     printf("                   -------------------------\n\n");
     printf("                      [A]. Mix Koththu\n");
     printf("                      [B]. Chicken Koththu\n");
     printf("                      [C]. Veggie Koththu\n");
     printf("\n               Enter your favorite : ");
       scanf("%s",&type);

        if (type=='A')
        {
           price=350*koththuOrder();
        }
        else if (type=='B')
        {
             price=300*koththuOrder();
        }
        else if (type=='C')
        {
             price=250*koththuOrder();
        }

        else
        {
            printf("--> Invalid Input <--\n");
        }
        tot3=tot3+price;
        printf("Is there any koththu you want to order (Y/N) - ");
        scanf("%s",&a);
     }while (a=='Y');
   }
   else if (d=='N')
   {
       return tot3;
   }
   else
   {
       printf("--> Invalid Input <--");
       koththu();
   }
   return tot3;
 }

int shorteatsOrder()
 {
    int noOf_Items=0;
   printf("How many pieces you want - ");
            scanf("%d",&noOf_Items);
            printf("--> Item added to your cart <--\n\n");
            return noOf_Items;
 }


 int shorteats()
 {  int price,tot4;
    price=0; tot4=0;
   printf("\nDo you want to buy any short eats (Y/N) - ");
   scanf("%s",&d);

  if (d=='Y')
   {
    do
    {   price=0;
    printf(" \n                      Choose Favorite\n");
     printf("                   -------------------------\n\n");
     printf("                      [A]. Hot Dogs\n");
     printf("                      [B]. Rolls\n");
     printf("                      [C]. Pastry\n");
     printf("                      [D]. Doughnut\n");
     printf("                      [E]. Sandwich\n");
     printf("\n               Enter your favorite : ");
           scanf("%s",&type);
        if (type=='A')
        {
            price=100*shorteatsOrder();
        }
        else if (type=='B')
        {
            price=50*shorteatsOrder();
        }
        else if (type=='C')
        {
            price=60*shorteatsOrder();
        }
        else if (type=='D')
        {
            price=60*shorteatsOrder();
        }
        else if (type=='E')
        {
            price=100*shorteatsOrder();
        }
        else
        {
            printf("--> Invalid Input <--\n");
        }
        tot4=tot4+price;
        printf("Is there any shorteat you want to order (Y/N) - ");
        scanf("%s",&a);
       } while (a=='Y');

   }
   else if (d=='N')
   {
       return tot4;
   }
   else
   {
       printf("--> Invalid Input <--");
       shorteats();
   }
   return tot4;
 }

 int drinksOrder()
 {
    int noOf_Items=0;
   printf("How many Bottles you want - ");
            scanf("%d",&noOf_Items);
            printf("--> Item added to your cart <--\n\n");
            return noOf_Items;
 }

 int drinks()
 {  int price,tot5;
    price=0; tot5=0;
   printf("\nDo you want to buy soft drinks (Y/N) - ");
   scanf("%s",&d);

  if (d=='Y')
   {
    do
    {   price=0;
        printf(" \n                      Choose Favorite\n");
     printf("                   -------------------------\n\n");
     printf("                      [A]. Coca-Cola\n");
     printf("                      [B]. Sprite\n");
     printf("                      [C]. Cream Soda\n");
     printf("                      [D]. Pepsi\n");
     printf("                      [E]. 7Up\n");
     printf("\n               Enter your favorite : ");
        scanf("%s",&type);

        if (type=='A')
        {
            price=60*drinksOrder();
        }
        else if (type=='B')
        {
            price=65*drinksOrder();
        }
        else if (type=='C')
        {
            price=55*drinksOrder();
        }
        else if (type=='D')
        {
            price=60*drinksOrder();
        }
        else if (type=='E')
        {
            price=60*drinksOrder();
        }
        else
        {
            printf("--> Invalid Input <--\n");
        }
        tot5=tot5+price;
        printf("Is there any soft drink you want to order (Y/N) - ");
        scanf("%s",&a);
       } while (a=='Y');

   }
   else if (d=='N')
   {
       return tot5;
   }
   else
   {
       printf("--> Invalid Input <--");
       drinks();
   }
   return tot5;
 }

 int dessertsOrder()
 {
    int noOf_Items=0;
   printf("How many Cups you want - ");
            scanf("%d",&noOf_Items);
            printf("--> Item added to your cart <--\n\n");
            return noOf_Items;
 }


int desserts()
 {  int price,tot6;
    price=0; tot6=0;
   printf("\nDo you want to buy any Desserts (Y/N) - ");
   scanf("%s",&d);

  if (d=='Y')
   {
   do
    {   price=0;

        printf(" \n                      Choose Favorite\n");
     printf("                   -------------------------\n\n");
     printf("                      [A]. Fruit Salads\n");
     printf("                      [B]. Watalappan\n");
     printf("                      [C]. Caramel Pudding\n");
     printf("                      [D]. Yaughurt\n");
     printf("                      [E]. Ice-Cream\n");
     printf("\n               Enter your favorite : ");
        scanf("%s",&type);

        if (type=='A')
        {
            price=150*dessertsOrder();
        }
        else if (type=='B')
        {
            price=100*dessertsOrder();
        }
        else if (type=='C')
        {
            price=100*dessertsOrder();
        }
        else if (type=='D')
        {
            price=40*dessertsOrder();
        }
        else if (type=='E')
        {
            price=60*dessertsOrder();
        }
        else
        {
            printf("--> Invalid Input <--\n");
        }
        tot6=tot6+price;
        printf("Is there any dessert you want to order (Y/N) - ");
        scanf("%s",&a);
     } while (a=='Y');
   }
   else if (d=='N')
   {
       return tot6;
   }
   else
   {
       printf("--> Invalid Input <--");
      return tot6;
   }
   return tot6;
 }

 void bill()
 {
     int price,pay;
     float tot,balance,insufficient;
     tot=0;
      char Category,e;


 do
 {

    printf("\n                   -------------------------");
  printf("\n                        Meals Categories\n");
  printf("                   -------------------------\n\n");
  printf("                          [A].Pizza\n");
  printf("                          [B].Fried Rice\n");
  printf("                          [C].Koththu\n");
  printf("                          [D].Short eats\n");
  printf("                          [E].Soft Drinks\n");
  printf("                          [F].Desserts\n");
  printf("                          [G].EXIT\n");
  printf("\n             (#)>--Enter your choice [A/B/C/D/E/F/G] : ");
scanf("%s",&Category);
      if(Category=='A')
      {
     price=pizza();
      }
      else if(Category=='B')
      {
     price=rice();
      }
      else if(Category=='C')
      {
     price=koththu();
      }
      else if(Category=='D')
      {
     price=shorteats();
      }
      else if(Category=='E')
      {
     price=drinks();
      }
      else if(Category=='F')
      {
     price=desserts();
      }
       else if(Category=='G')
      {

     printf("\n\n___________________________________________________________________________________________\n ");
     printf("\n-#Payment ------------------------------------------------------------------- \n\n");
     printf("\tTotal\t\t\t\tRs. %.2f\n",tot);
     printf("\tCash\t\t\t\tRs. ");
     scanf("%d",&pay);

     if(tot<=pay)
     {
         balance=pay-tot;
         printf("\t\t\t\t\t_________________\n \tBalance\t\t\t\tRs. %.2f\n",balance);
         printf("\t\t\t\t\t_________________\n");
         printf("\t\t\t\t\t_________________\n");
     }
     else
     {
         printf("\n--- Insufficient cash ---\n\n");
         insufficient= -(pay-tot);
         printf("You need to add Rs. %.2f \n\n",insufficient);
     }

      }


      else
      {
      printf("\n                    ***--> Invalid Input <--\n\n\n");
      bill();
      }

     tot=tot+price;
     printf("\n        :|*|: Do you want to order anything else? (Y/N) : ");
     scanf("%s",&e);

 }while(e=='Y');


     printf("\n\n___________________________________________________________________________________________\n ");
     printf("\n-#Payment ------------------------------------------------------------------- \n\n");
     printf("\tTotal\t\t\t\tRs. %.2f\n",tot);
     printf("\tCash\t\t\t\tRs. ");
     scanf("%d",&pay);

     if(tot<=pay)
     {
         balance=pay-tot;
         printf("\t\t\t\t\t_________________\n \tBalance\t\t\t\tRs. %.2f\n",balance);
         printf("\t\t\t\t\t_________________\n");
         printf("\t\t\t\t\t_________________\n");
     }
     else
     {
         printf("\n--- Insufficient cash ---\n\n");
         insufficient= -(pay-tot);
         printf("You need to add Rs. %.2f \n\n",insufficient);
     }

 }

int main()
{
    menu();
    bill();
       printf("\n\n^^^^^^^^^^^^=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=^^^^^^^^^^^^\n");
       printf("\t                   >>>>>>>>>>>>>__THANK YOU__<<<<<<<<<<<<<\n");
       printf("\t    =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n\n\n");
       printf(" __________________________________________________________________________________________\n ");
       printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n ");
       printf("******************************************************************************************\n ");
    return 0;
}
