#include <stdio.h>
#define HEIGHT 10
#define WIDTH 10

int  init_array(int height, int width, int array[][WIDTH], int symbol)
{
    for (int i = 0; i < height ;i++)
    {   
        for (int j = 0; j < width ; j++)
        {
            array[i][j] = symbol;
        }
           
    }
    return 0;
}
int  print_array(int height, int width, int array[][WIDTH])
{
    for (int i = 0; i < height ; i++)
    {   
        for (int j = 0; j < width ; j++)
        {            
            printf ("%d", array[i][j]);
        }
        puts(" ");          
    }
    return 0;    
}

int main(void)
{
    int my_array[HEIGHT][WIDTH];
    init_array(HEIGHT,WIDTH,my_array,0);
    print_array(HEIGHT,WIDTH,my_array);
    init_array(HEIGHT,WIDTH,my_array,1);
    print_array(HEIGHT,WIDTH,my_array);
    return 0;
}

