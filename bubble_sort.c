#include <stdio.h>

int main()
{
   int array[100], c, n ;
   int dire,j;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
}
printf("Enter 0 for ascending order or 1 for descending order: ");
scanf("%d",&dire);
 bubblesort(c, n,dire);
printf("Array after sorting is: ");

 for(int j=0;j<n;j++)

 	{

 		printf("%d\n", array[j]);

 	}

 return(0);

}


void bubblesort(int *s, int sz,int dit)

{

	int swapping=1;



	while(swapping==1)

	{

		swapping=0;

		for(int a=0;a<sz;a++)

		{

			if(dit==0)

			{

			if(s[a+1]<s[a])

			{
               int temp=s[a];

				s[a]=s[a+1];

				s[a+1]=temp;

				swapping=1;

			}

			}

			else if(dit==1)

			{

				if(s[a+1]>s[a])

							{

                               int temp=s[a];

								s[a]=s[a+1];

								s[a+1]=temp;

								swapping=1;
            }

			}

		}

	}

}
