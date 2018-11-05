#include<stdio.h>
int find_min (int[], int);
int main ()
{

    int c, array[100], size,location, min;
        printf("input number of element in array\n");
        scanf("%d", &size);
        printf("input %d \n", size);
        for(c=0; c<size; c++)

            scanf("%d", &array[c]);
        location=find_min(array, size);
        min = array[location];
        printf("the locattion %d and minimum  %d " ,location +1  , min );

        return 0;


}
int find_min (int a[], int n)
{
    int c,miin,index;
    miin=a[0];
    index=0;
    for(c=1; c<n; c++)
    {
        if(a[c] < miin)
        {
            index=c;
            miin=a[c];
        }
    }
    return index;
}
