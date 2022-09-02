#include <stdio.h>

int main(){
	int height, width, area, perimeter;
	printf("Enter the height and the width of the rectangle respectively: ");
	scanf("%d%d", &height, &width);

	area=height*width;
	perimeter=(height*2)+(width*2);
	
	printf("Area of the rectangle is: %d \n", area);
	printf("Perimeter of the rectangle is: %d", perimeter);
	
	
	return 0;
}
