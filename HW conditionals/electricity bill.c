#include <stdio.h>

int main()
{
    int cid=1001,units=800;
    char name[50]="James";
    float chargeperunit,total,surcharge=0,netamt;
    printf("\nElectricity Bill\n");
    printf("Customer IDNO:%d\n",cid);
    printf("Customer Name:%s\n",name);
    printf("Units Consumed %d\n",units);
    
    
    if(units<=199)
    {
        chargeperunit=1.20;
    }
    else if(units>=200&&units<400)
    {
        chargeperunit=1.50;
    }
    else if(units>=400&&units<600)
    {
        chargeperunit=1.80;
    }
    else
    {
    chargeperunit=2.00;
    }
    total=units*chargeperunit;
    if(total>400)
    {
        surcharge=total*0.15;
    }
    netamt=total+surcharge;
    if(netamt<100)
    {
        netamt=100;
    }
    printf("Amonut Charges @Rs.%f per Unit:₹%f \n", chargeperunit,total);
    printf("Surcharge Amount: ₹%f\n", surcharge);
    printf("Net Amount Paid : ₹%f\n", netamt);


}
