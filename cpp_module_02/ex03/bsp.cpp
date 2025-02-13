#include "Point.hpp"

static void	checkSamePoint(const Point& a, const Point& b, const Point& c, const Point &point)
{
	const Point pointTab[4]={a,b,c,point};

	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if (pointTab[i] == pointTab[j])
				throw(std::runtime_error("SamePoint"));
		}
	}
}
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	try{
		checkSamePoint(a,b,c,point);
	}catch(const std::runtime_error& e){
		std::cerr << e.what() << '\n';
	}
	Fixed crossProductAbAp = Point::getCrossProduct(a,b,point);
	Fixed crossProductBcBp = Point::getCrossProduct(b,c,point);
	Fixed crossProductCaCp = Point::getCrossProduct(c,a,point);

	// std::cout<<crossProductAbAp<<"\n";
	// std::cout<<crossProductBcBp<<"\n";
	// std::cout<<crossProductCaCp<<"\n";

	if (crossProductAbAp > 0 && crossProductBcBp > 0 && crossProductCaCp > 0)
		return true;
	if (crossProductAbAp < 0 && crossProductBcBp < 0 && crossProductCaCp < 0)
		return true;
	return false;
}