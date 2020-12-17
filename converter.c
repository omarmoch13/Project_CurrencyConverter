
#include <stdio.h>


void converter ();
int main ()
{
 double singapur = 0.000053, cina = 0.00046, yen = 0.0073, poundsterling = 0.000053, euro = 0.000058, dollar=0.000071, australia= 0.000094, ringgit= 0.00029, won = 0.077, BRL=0.00040  ;
 double amount ,converted_amount =0;
converter();
scanf("%lf", &amount);
printf("Your amount in SGD is: %lf\n", amount*singapur);
printf("Your amount in dollar is: %lf\n", amount*dollar);
printf("Your amount in cina is: %lf\n", amount*cina);
printf("Your amount in poundsterling is: %lf\n", amount*poundsterling);
printf("Your amount in euro is: %lf\n", amount*euro);
printf("your amount in yen is: %lf\n", amount*yen);
printf("your amount in AUD is: %lf\n", amount*australia);
printf("your amount in ringgit is: %lf\n", amount*ringgit);
printf("your amount in won is: %lf\n", amount*won);
printf("your amount in real is: %lf\n", amount*BRL);
}

void converter()
{
printf("\n \n  \t \t \t CONVERTER BY RUKI MUHAMMAD ANATHAPINDIKA MOCHTAR \n \n \n \n ");
printf("1. SGD  \n 2. YUAN \n 3. YEN \n 4. Poundsterling \n 5. Euro \n 6. USD \n 7. AUD \n 8. RM \n 9. WON \n 10. BRL \n \n ");
printf(" Enter Your Amount \n ");
}
