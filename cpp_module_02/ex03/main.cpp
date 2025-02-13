#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	
	{
	//삼각형의 세 점: A(0, 0), B(5, 0), C(0, 5) 점 P: (2, 2) : 내부
		Point a(0,0);	Point b(5,0); 	Point c(0,5);	Point point(2,2);
		std::cout<<"1th: ";
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	//삼각형의 세 점: A(0, 0), B(5, 0), C(0, 5) 점 P: (5, 5) : 외부
		std::cout<<"2th: ";
		Point a(0,0);	Point b(5,0); 	Point c(0,5);	Point point(5,5);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(0, 0), B(5, 0), C(0, 5) 점 P: (0, 0) : 꼭짓점
		std::cout<<"3th: ";
		Point a(0,0);	Point b(5,0); 	Point c(0,5);	Point point(0,0);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(-1, -1), B(1, -1), C(0, 1) 점 P: (0, 0) : 내부
		std::cout<<"4th: ";
		Point a(-1,-1);	Point b(1,-1); 	Point c(0,1);	Point point(0,0);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(-1, -1), B(1, -1), C(0, 1) 점 P: (2, 2) : 외부
		std::cout<<"5th: ";
		Point a(-1,-1);	Point b(1,-1); 	Point c(0,1);	Point point(2,2);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(0, 0), B(4, 0), C(2, 2) 점 P: (2, 0) : 변 위에
		std::cout<<"6th: ";
		Point a(0,0);	Point b(4,0); 	Point c(2,2);	Point point(2,0);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(1, 1), B(3, 1), C(2, 3) 점 P: (2, 2) : 내부
		std::cout<<"7th: ";
		Point a(1,1);	Point b(3,1); 	Point c(2,3);	Point point(2,2);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(1, 1), B(3, 1), C(2, 3) 점 P: (0, 0) : 외부
		std::cout<<"8th: ";
		Point a(1,1);	Point b(3,1); 	Point c(2,3);	Point point(0,0);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(0, 0), B(2, 0), C(1, 1) 점 P: (1, 0.5) : 내부
		std::cout<<"9th: ";
		Point a(0,0);	Point b(2,0); 	Point c(1,1);	Point point(1,0.5);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(0, 0), B(2, 0), C(1, 1) 점 P: (1, 1) : 꼭짓점 위에
		std::cout<<"10th: ";
		Point a(0,0);	Point b(2,0); 	Point c(1,1);	Point point(1,1);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(0.5, 0.5), B(5.2, 0.5), C(2.5, 4.8) 점 P: (2.5, 2.5) : 내부
		std::cout<<"11th: ";
		Point a(0.5,0.5);	Point b(5.2,0.5); 	Point c(2.5,4.8);	Point point(2.5,2.5);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(1.1, 1.1), B(3.3, 1.1), C(2.2, 3.7) 점 P: (4.0, 2.0) : 외부
		std::cout<<"12th: ";
		Point a(1.1,1.1);	Point b(3.3,1.1); 	Point c(2.2,3.7);	Point point(4.0,2.0);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
	{
	// 삼각형의 세 점: A(-1.5, -1.5), B(2.5, -1.5), C(0.5, 2.3) 점 P: (0.5, -1.5) : 변 위;
		std::cout<<"13th: ";
		Point a(-1.5,-1.5);	Point b(2.5,-1.5); 	Point c(0.5,2.3);	Point point(0.5,-1.5);
		std::cout<<(bsp(a,b,c,point) ? "in":"not in");
		std::cout<<"\n";
	}
}