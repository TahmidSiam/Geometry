#include<stdio.h>
#include<math.h>
int main()
{
    int index;
    printf("\t\t\t\t\tIndex");
    printf("\n\t\t\tAll the input units will be in SI unit");
    printf("\n01.Circle \n02.Simple Triangle \n03.Right Triangle");
    printf("\n04.Equilateral Triangle \n05.Isosceles Triangle \n06.Heterogeneous Triangle");
    printf("\n07.Parallelogram \n08.Rhombus \09.Trapezium");
    printf("\n10.Rectangle \n11.Square \n12.Homogeneous Polygon");
    printf("\n13.Rectangular Cube \n14.Cube \n15.Prism \n16.Pyramid");
    printf("\n17.Right Circular Cone \n18.Sphere \n19.Cylinder \n20.Capsule");
    printf("\nEnter Shapes index:");
    scanf("%d",&index);
    printf("\n");
    if(index==1)
    {
    float r,d,p,a;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    d=2*r;
    p=2*3.1416*r;
    a=(3.1416)*pow(r,2);
    printf("\nThe diameter is:%.6f m\n",d);
    printf("The diameter is:%.6f cm\n",d*100);
    printf("The diameter is:%.6f ft\n",d*3.28);
    printf("\n");
    printf("The Parameter is:%.6f sq m\n",p);
    printf("The Parameter is:%.6f sq cm\n",p*100);
    printf("The Parameter is:%.6f sq ft\n",p*3.28);
    printf("\n");
    printf("The area is:%.6f sq m\n",a);
    printf("The area is:%.6f sq cm\n",a*10000);
    printf("The area is:%.6f sq ft\n",a*10.76);
    printf("\n");
    }
    else if(index==2)
    {
    float b,s,h,a,area;
    printf("Type base of a triangle:");
    scanf("%f",&b);
    printf("Type side of a triangle:");
    scanf("%f",&s);
    printf("Enter the angle:");
    scanf("%f",&a);
    h=s*sin(a*(3.1416/180));
    area=(0.5*b*h)*sin(a*(3.1416/180));
    printf("\nThe height is:%f m",h);
    printf("\nThe height is:%f cm",h*100);
    printf("\nThe height is:%f ft",h*3.28);
    printf("\n");
    printf("\nThe area is:%.6f sq m",area);
    printf("\nThe area is:%.6f sq cm",area*10000);
    printf("\nThe area is:%.6f sq ft",area*10.76);
    printf("\n");
    }
    else if(index==3)
    {
    float a,b,c1,c2,p,ar;
    printf("Enter two sides of triangle:\n");
    scanf("%f %f",&a,&b);
    c1=pow(a,2)+pow(b,2);
    c2=sqrt(c1);
    p=a+b+c2;
    ar=0.5*a*b;
    printf("\nThe hypotenuses is:%.6f m",c2);
    printf("\nThe hypotenuses is:%.6f cm",c2*100);
    printf("\nThe hypotenuses is:%.6f ft",c2*3.28);
    printf("\n");
    printf("\nThe parameter is:%.6f m",p);
    printf("\nThe parameter is:%.6f cm",p*100);
    printf("\nThe parameter is:%.6f ft",p*3.28);
    printf("\n");
    printf("\nThe area is:%.6f sq m",ar);
    printf("\nThe area is:%.6f sq cm",ar*10000);
    printf("\nThe area is:%.6f sq ft",ar*10.76);
    printf("\n");
    }
    else if(index==4)
    {
    float a,h,p,ar;
    printf("Enter a side of triangle:");
    scanf("%f",&a);
    h=0.5*sqrt(3)*a;
    p=3*a;
    ar=0.25*sqrt(3)*pow(a,2);
    printf("\nThe height is:%f m",h);
    printf("\nThe height is:%f cm",h*100);
    printf("\nThe height is:%f ft",h*3.28);
    printf("\n");
    printf("\nThe parameter is:%f m",p);
    printf("\nThe parameter is:%f cm",p*100);
    printf("\nThe parameter is:%f ft",p*3.28);
    printf("\n");
    printf("\nThe area is:%f sq m",ar);
    printf("\nThe area is:%f sq cm",ar*10000);
    printf("\nThe area is:%f sq ft",ar*10.76);
    printf("\n");
    }
    else if(index==5)
    {
    float a,b,h1,h2,h3,p,ar;
    printf("Enter two same sides:");
    scanf("%f",&a);
    printf("Enter third side:");
    scanf("%f",&b);
    h1=(4*pow(a,2))-pow(b,2);
    h2=sqrt(h1);
    h3=0.5*h2;
    p=2*a+b;
    ar=0.25*b*h1;
    printf("\nThe height is:%f m",h3);
    printf("\nThe height is:%f cm",h3*100);
    printf("\nThe height is:%f ft",h3*3.28);
    printf("\n");
    printf("\nThe parameter is:%f m",p);
    printf("\nThe parameter is:%f cm",p*100);
    printf("\nThe parameter is:%f ft",p*3.28);
    printf("\n");
    printf("\nThe area is:%f sq m",ar);
    printf("\nThe area is:%f sq cm",ar*10000);
    printf("\nThe area is:%f sq ft",ar*10.76);
    printf("\n");
    }
    else if(index==6)
    {
    float a,b,c,s,ar1,ar2;
    printf("Enter three sides of a triangle:\n");
    scanf("%f %f %f",&a,&b,&c);
    s=a+b+c;
    ar1=s*(s-a)*(s-b)*(s-c);
    ar2=sqrt(ar1);
    printf("\nThe parameter is:%f m",s);
    printf("\nThe parameter is:%f cm",s*100);
    printf("\nThe parameter is:%f ft",s*3.28);
    printf("\n");
    printf("\nThe area is:%f sq m",ar2);
    printf("\nThe area is:%f sq cm",ar2*10000);
    printf("\nThe area is:%f sq ft",ar2*10.76);
    printf("\n");
    }
    else if(index==7)
    {
    float l,b,a,h,p,ar;
    printf("Enter the base:");
    scanf("%f",&b);
    printf("Enter the side:");
    scanf("%f",&l);
    printf("Enter the angle:");
    scanf("%f",&a);
    h=l*sin(a*(3.1416/180));
    p=2*(b+l);
    ar=(b*h)*sin(a*(3.1416/180));
    printf("\nThe height is:%f m",h);
    printf("\nThe height is:%f cm",h*100);
    printf("\nThe height is:%f ft",h*3.28);
    printf("\n");
    printf("\nThe parameter is:%f m",p);
    printf("\nThe parameter is:%f cm",p*100);
    printf("\nThe parameter is:%f ft",p*3.28);
    printf("\n");
    printf("\nThe area is:%f sq m",ar);
    printf("\nThe area is:%f sq cm",ar*10000);
    printf("\nThe area is:%f sq ft",ar*10.76);
    printf("\n");
    }
    else if(index==8)
    {
    float b,a,h,p,ar;
    printf("Enter a side:");
    scanf("%f",&b);
    printf("Enter the angle:");
    scanf("%f",&a);
    h=b*sin(a*(3.1416/180));
    p=4*b;
    ar=(b*h)*sin(a*(3.1416/180));
    printf("\nThe height is:%f m",h);
    printf("\nThe height is:%f cm",h*100);
    printf("\nThe height is:%f ft",h*3.28);
    printf("\n");
    printf("\nThe parameter is:%f m",p);
    printf("\nThe parameter is:%f cm",p*100);
    printf("\nThe parameter is:%f ft",p*3.28);
    printf("\n");
    printf("\nThe area is:%f sq m",ar);
    printf("\nThe area is:%f sq cm",ar*10000);
    printf("\nThe area is:%f sq ft",ar*10.76);
    printf("\n");
    }
    else if(index==9)
    {
    float b,s,h,ar;
    printf("Enter large side:");
    scanf("%f",&b);
    printf("Enter small side:");
    scanf("%f",&s);
    printf("Enter height:");
    scanf("%f",&h);
    ar=0.5*h*(s+b);
    printf("\nThe area is:%.6f sq m",ar);
    printf("\nThe area is:%.6f sq cm",ar*10000);
    printf("\nThe area is:%.6f sq ft",ar*10.76);
    printf("\n");
    }
    else if(index==10)
    {
    float a,b,area,par,dia,diag;
    printf ("Enter length:");
    scanf ("%f",&a);
    printf("Enter breadth:");
    scanf("%f",&b);
    area=a*b;
    par=2*(a+b);
    dia=pow(a,2)+pow(b,2);
    diag=sqrt(dia);
    printf("\nThe diagonal is:%.6f m",diag);
    printf("\nThe diagonal is:%.6f cm",diag*100);
    printf("\nThe diagonal is:%.6f ft",diag*3.28);
    printf("\n");
    printf("\nThe parameter is:%.6f m",par);
    printf("\nThe parameter is:%.6f cm",par*100);
    printf("\nThe parameter is:%.6f ft",par*3.28);
    printf("\n");
    printf("\nThe area is:%.6f sq m", area);
    printf("\nthe area is:%.6f sq cm",area*10000);
    printf("\nthe area is:%.6f sq ft",area*10.76);
    printf("\n");
    }
    else if(index==11)
    {
    float a,area,par,dia,diag;
    printf ("Enter side in meter:");
    scanf ("%f",&a);
    area=a*a;
    par=4*a;
    dia=2*pow(a,2);
    diag=sqrt(dia);
    printf("\nThe diagonal is:%.6f m",diag);
    printf("\nThe diagonal is:%.6f cm",diag*100);
    printf("\nThe diagonal is:%.6f ft",diag*3.28);
    printf("\n");
    printf("\nThe parameter is:%.6f m",par);
    printf("\nThe parameter is:%.6f cm",par*100);
    printf("\nThe parameter is:%.6f ft",par*3.28);
    printf("\n");
    printf("\nThe area is:%.6f sq m", area);
    printf("\nthe area is:%.6f sq cm",area*10000);
    printf("\nthe area is:%.6f sq ft",area*10.76);
    printf("\n");
    }
    else if(index==12)
    {
         float n,l,h,p,ar1,ar2,ar3;
    printf("Enter number of sides:");
    scanf("%f",&n);
    printf("Enter side length:");
    scanf("%f",&l);
    h=l*sin(6.283185307/n);
    p=n*l;
    ar1=0.25*n*pow(l,2);
    ar2=1/tan(3.141592654/n);
    ar3=ar1*ar2;
    printf("\nThe height is:%f m",h);
    printf("\nThe height is:%f cm",h*100);
    printf("\nThe height is:%f ft",h*3.28);
    printf("\n");
    printf("\nThe parameter is:%f m",p);
    printf("\nThe parameter is:%f cm",p*100);
    printf("\nThe parameter is:%f ft",p*3.28);
    printf("\n");
    printf("\nThe area is:%f sq m",ar3);
    printf("\nThe area is:%f sq cm",ar3*10000);
    printf("\nThe area is:%f sq ft",ar3*10.76);
    printf("\n");
    }
    else if(index==13)
    {
    float a,b,c,dia1,dia2,ar,vol,para;
    printf("Enter length:",&a);
    scanf("%f",&a);
    printf("Enter breadth:",&a);
    scanf("%f",&b);
    printf("Enter height:",&a);
    scanf("%f",&c);
    para=2*(a+b);
    dia1= pow(a,2)+pow(b,2)+pow(c,2);
    dia2=sqrt(dia1);
    ar=2*((a*b)+(b*c)+(a*c));
    vol=a*b*c;
    printf("\nThe parameter is:%f m\n",para);
    printf("The parameter is:%f cm\n",para*100);
    printf("The parameter is:%f ft\n",para*3.28);
    printf("\n");
    printf("The diagonal is:%f m\n",dia2);
    printf("The diagonal is:%f cm\n",dia2*100);
    printf("The diagonal is:%f ft\n",dia2*3.28);
    printf("\n");
    printf("The whole surface area is:%f sq m\n",ar);
    printf("The whole surface area is:%f sq cm\n",ar*10000);
    printf("The whole surface area is:%f sq ft\n",ar*10.76);
    printf("\n");
    printf("The volume is:%f cu m\n",vol);
    printf("The volume is:%f cu cm\n",vol*1000000);
    printf("The volume is:%f m\n",vol*35.287552);
    printf("\n");
    }
    else if(index==14)
    {
    float a,dia,ar,vol,para;
    printf("Enter a side:",&a);
    scanf("%f",&a);
    para=4*a;
    dia=sqrt(3)*a;
    ar=6*pow(a,2);
    vol=pow(a,3);
    printf("\nThe parameter is:%f m\n",para);
    printf("The parameter is:%f cm\n",para*100);
    printf("The parameter is:%f ft\n",para*3.28);
    printf("\n");
    printf("The diagonal is:%f m\n",dia);
    printf("The diagonal is:%f cm\n",dia*100);
    printf("The diagonal is:%f ft\n",dia*3.28);
    printf("\n");
    printf("The whole surface area is:%f sq m\n",ar);
    printf("The whole surface area is:%f sq cm\n",ar*10000);
    printf("The whole surface area is:%f sq ft\n",ar*10.76);
    printf("\n");
    printf("The volume is:%f cu m\n",vol);
    printf("The volume is:%f cu cm\n",vol*1000000);
    printf("The volume is:%f m\n",vol*35.287552);
    printf("\n");
    }
    else if(index==15)
    {
    float n,l,h,p,ar1,ar2,ar3,vol;
    printf("Enter number of sides>3:");
    scanf("%f",&n);
    printf("Enter side length:");
    scanf("%f",&l);
    printf("Enter height:");
    scanf("%f",&h);
    p=n*l;
    ar1=0.5*n*pow(l,2);
    ar2=1/tan(3.141592654/n);
    ar3=ar1*ar2+(n*l*h);
    vol=ar3*h;
    printf("\nThe parameter is:%f m",p);
    printf("\nThe parameter is:%f cm",p*100);
    printf("\nThe parameter is:%f ft",p*3.28);
    printf("\n");
    printf("\nThe area is:%f sq m",ar3);
    printf("\nThe area is:%f sq cm",ar3*10000);
    printf("\nThe area is:%f sq ft",ar3*10.76);
    printf("\n");
    printf("\nThe volume is:%f cu m",vol);
    printf("\nThe volume is:%f cu cm",vol*1000000);
    printf("\nThe volume is:%f m",vol*35.287552);
    printf("\n");
    }
    else if(index==16)
    {
    float n,l,lh,ll,h,p,r,ar1,ar2,ar3,vol;
    printf("Enter number of sides>3:");
    scanf("%f",&n);
    printf("Enter side length:");
    scanf("%f",&l);
    printf("Enter height:");
    scanf("%f",&h);
    r=1/sqrt(2)*l;
    lh=pow(h,2)+pow(r,2);
    ll=sqrt(lh);
    p=n*l;
    ar1=0.5*n*pow(l,2);
    ar2=1/tan(3.141592654/n);
    ar3=ar1*ar2+(0.5*(n*l*ll));
    vol=0.3333*ar3*h;
    printf("\nThe radius is:%f m",r);
    printf("\nThe radius is:%f cm",r*100);
    printf("\nThe radius is:%f ft",r*3.28);
    printf("\n");
    printf("\nThe length of slope is:%f m",ll);
    printf("\nThe length of slope is:%f cm",ll*100);
    printf("\nThe length of slope is:%f ft",ll*3.28);
    printf("\n");
    printf("\nThe parameter:%f m",p);
    printf("\nThe parameter:%f cm",p*100);
    printf("\nThe parameter:%f ft",p*3.28);
    printf("\n");
    printf("\nThe area is:%f sq m",ar3);
    printf("\nThe area is:%f sq cm",ar3*10000);
    printf("\nThe area is:%f sq ft",ar3*10.76);
    printf("\n");
    printf("\nThe volume is:%f cu m",vol);
    printf("\nThe volume is:%f cu cm",vol*1000000);
    printf("\nThe volume is:%f m",vol*35.287552);
    printf("\n");
    }
    else if(index==17)
    {
    float r,h,l1,l2,csa,wsa,vol;
    printf("Enter radius:");
    scanf("%f",&r);
    printf("Enter height:");
    scanf("%f",&h);
    l1=pow(h,2)+pow(r,2);
    l2=sqrt(l1);
    csa=3.1416*r*l2;
    wsa=3.1416*r*(r+l2);
    vol=0.3333*r*r*h;
    printf("\nThe length of slope is:%f m",l2);
    printf("\nThe length of slope is:%f cm",l2*100);
    printf("\nThe length of slope is:%f ft",l2*3.28);
    printf("\n");
    printf("\nThe curved surface area is:%f sq m",csa);
    printf("\nThe curved surface area is:%f sq cm",csa*10000);
    printf("\nThe curved surface area is:%f sq ft",csa*10.76);
    printf("\n");
    printf("\nThe whole surface area is:%f sq m",wsa);
    printf("\nThe whole surface area is:%f sq cm",wsa*10000);
    printf("\nThe whole surface area is:%f sq ft",wsa*10.76);
    printf("\n");
    printf("\nThe volume of the cylinder is:%f cu m",vol);
    printf("\nThe volume of the cylinder is:%f cu cm",vol*1000000);
    printf("\nThe volume of the cylinder is:%f cu ft",vol*35.287552);
    printf("\n");
    }
    else if(index==18)
    {
    float r,d,p,v,a,pie=3.1416;
    printf("Enter radius of circle in meter:");
    scanf("%f",&r);
    d=2*r;
    p=2*(pie)*r;
    a=(pie)*pow(r,2);
    v=(4/3)*(pie)*pow(r,3);
    printf("\nThe diameter is:%.6f m\n",d);
    printf("The diameter is:%.6f cm\n",d*100);
    printf("The diameter is:%.6f ft\n",d*3.28);
    printf("\n");
    printf("The parameter is:%.6f sq m\n",p);
    printf("The parameter is:%.6f sq cm\n",p*100);
    printf("The parameter is:%.6f sq ft\n",p*3.28);
    printf("\n");
    printf("The area is:%.6f sq m\n",a);
    printf("The area is:%.6f sq cm\n",a*10000);
    printf("The area is:%.6f sq ft\n",a*10.76);
    printf("\n");
    printf("The volume is:%.6f cu m\n",v);
    printf("The volume is:%.6f cu cm\n",v*1000000);
    printf("The volume is:%.6f cu ft\n",v*35.315);
    }
    else if(index==19)
    {
    float r,h,p,ba,csa,wsa,v;
    printf("Enter radius:");
    scanf("%f",&r);
    printf("Enter height:");
    scanf("%f",&h);
    p=(4*3.1416*r)+(2*r+h);
    ba=3.1416*pow(r,2);
    csa=2*3.1416*h;
    wsa=2*3.1416*r*(r+h);
    v=3.1416*pow(r,2)*h;
    printf("\nThe parameter of the cylinder is:%f m",p);
    printf("\nThe parameter of the cylinder is:%f cm",p*100);
    printf("\nThe parameter of the cylinder is:%f ft",p*3.28);
    printf("\n");
    printf("\nThe base area of the cylinder is:%f sq m",ba);
    printf("\nThe base area of the cylinder is:%f sq cm",ba*10000);
    printf("\nThe base area of the cylinder is:%f sq m",ba*10.76);
    printf("\n");
    printf("\nThe curved surface area of the cylinder is:%f sq m",csa);
    printf("\nThe curved surface area of the cylinder is:%f sq cm",csa*10000);
    printf("\nThe curved surface area of the cylinder is:%f sq ft",csa*10.76);
    printf("\n");
    printf("\nThe whole surface area of the cylinder is:%f sq m",wsa);
    printf("\nThe whole surface area of the cylinder is:%f sq cm",wsa*10000);
    printf("\nThe whole surface area of the cylinder is:%f sq ft",wsa*10.76);
    printf("\n");
    printf("\nThe volume of the cylinder is:%f cu m",v);
    printf("\nThe volume of the cylinder is:%f cu cm",v*1000000);
    printf("\nThe volume of the cylinder is:%f cu ft",v*35.287552);
    printf("\n");
    }
    else if(index==20)
    {
    printf("The value of height will be larger then radius\n");
    float r,h,h2,w1,w2,w3,v1,v2,v3;
    printf("Enter radius:");
    scanf("%f",&r);
    printf("Enter height:");
    scanf("%f",&h2);
    h=h2-2*r;
    w1=4*3.1416*r*r;
    w2=2*3.1416*r*h;
    w3=w1+w2;
    v1=1.3333*3.1416*r*r*r;
    v2=3.1416*r*r*h;
    v3=v1+v2;
    printf("\nThe whole surface area of the capsule is:%f sq m",w3);
    printf("\nThe whole surface area of the capsule is:%f sq cm",w3*10000);
    printf("\nThe whole surface area of the capsule is:%f sq ft",w3*10.76);
    printf("\n");
    printf("\nThe volume of the capsule is:%f cu m",v3);
    printf("\nThe volume of the capsule is:%f cu cm",v3*1000000);
    printf("\nThe volume of the capsule is:%f cu ft",v3*35.287552);
    printf("\n");
    }
    else
    {
     printf("Input is wrong");
    }
}
