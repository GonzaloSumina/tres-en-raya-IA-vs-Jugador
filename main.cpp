#include <iostream>
#include <string>
#include <time.h>

int main() {
    std::system("cls");
    std::cout << "Bienvenidos al juego Tres en Raya\nUCSP-Ciencia de la Computacion 2-1";
    std::cout << "Nombres.\n Gonzalo Sumina\n Juan Palo\n";
    char a='1', b='2', c='3', d='4', e='5', f='6', g='7', h='8', i='9';
    int a_=0, b_=0, c_=0, d_=0, e_=0, f_=0, g_=0, h_=0, i_=0;
    //bool 
    int fila1, fila2, fila3; 
    int columna1, columna2, columna3;
    int diagonal1, diagonal2;
    std::string fila="\033[31m----------\033[m";
    std::string columna="\033[31m | \033[m";
    char variable1;
    int variable2;
    char ficha1, ficha2;
    srand(time(NULL));
    std::cout << a << columna << b << columna << c << std::endl;
    std::cout << fila<<std::endl;
    std::cout << d << columna << e << columna << f << std::endl;
    std::cout << fila<<std::endl;
    std::cout << g << columna << h << columna << i << std::endl;

    std::cout << "Ingrese el simbolo que representara al Jugador1: ";
    std::cin >> ficha1;
    std::cout << "Ingrese el simbolo que representara la IA: ";
    std::cin >> ficha2;
    
    for (int x=0; x<9; ++x){
      if (x%2==0){
      	std::cout<<"Ingrese la posicion en donde desea colocar la ficha(1-9): ";
      	std::cin>>variable1;
        switch(variable1)
        {
          case '1':
            if (a==ficha1 || a==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            a=ficha1;
            a_=1;
            break;
            }
          case '2':
            if (b==ficha1 || b==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            b=ficha1;
            b_=1;
            break;
            }
          case '3':
            if (c==ficha1 || c==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            c=ficha1;
            c_=1;
            break;
            }
          case '4':
            if (d==ficha1 || d==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            d=ficha1;
            d_=1;
            break;
            }
          case '5':
            if (e==ficha1 || e==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            e=ficha1;
            e_=1;
            break;
            }
          case '6':
            if (f==ficha1 || f==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            f=ficha1;
            f_=1;
            break;
            }
          case '7':
            if (g==ficha1 || g==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            g=ficha1;
            g_=1;
            break;
            }
          case '8':
            if (h==ficha1 || h==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            h=ficha1;
            h_=1;
            break;
            }
          case '9':
            if (i==ficha1 || i==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            i=ficha1;
            i_=1;
            break;
            }
          default:
            std::cout << "Debe ingresar valores del 1 al 9";
            x=9;
            break;
        }
        std::system("cls");
        std::cout << a << columna << b << columna << c << std::endl;
        std::cout << fila<<std::endl;
        std::cout << d << columna << e << columna << f << std::endl;
        std::cout << fila<<std::endl;
        std::cout << g << columna << h << columna << i << std::endl;
        if (x>=4){
           if ((a==b && b==c) || (a==d && d==g) || (a==e && e==i)||
              (b==e && e==h) || (c==f && f==i) || (c==e && e==g) ||
              (d==e && e==f) || (g==h && h==i)){
              std::cout << "Felicidades! Gano el Jugador "<<ficha1<<std::endl;
              x=9;
           }
           else if (x==9){
              std::cout << "Empate";
           }
        }
      }
      else if ((x+1)%2==0){
      	//sumatoria
  	    fila1=a_+b_+c_;
  	    fila2=d_+e_+f_;
  	    fila3=g_+h_+i_;
  	    columna1=a_+d_+g_;
  	    columna2=b_+e_+f_;
  	    columna3=c_+f_+i_;
  	    diagonal1=a_+e_+i_;
  	    diagonal2=c_+e_+g_;
  	    if (fila1==2 || fila2==2 || fila3==2 || columna1==2 || columna2==2 || columna3==2 || diagonal1==2 || diagonal2==2){
  	    	if (fila1==2){
  	    		if (a_==0){
  	    			a=ficha2;
              a_=3;
  	    		}
  	    		else if (b_==0){
  	    			b=ficha2;
              b_=3;
  	    		}
      			else if (c_==0){
      				c=ficha2;
              c_=3;
      			}
      		}
          else if (fila2==2){
            if (d_==0){
              d=ficha2;
              d_=3;
            }
            else if (e_==0){
              e=ficha2;
              e_=3;
            }
            else if (f_==0){
              f=ficha2;
              f_=3;
            }
          }
          else if (fila3==2){
            if (g_==0){
              g=ficha2;
              g_=3;
            }
            else if (h_==0){
              h=ficha2;
              h_=3;
            }
            else if (i_==0){
              i=ficha2;
              i_=3;
            }
          }
          else if (columna1==2){
            if (a_==0){
              a=ficha2;
              a_=3;
            }
            else if (d_==0){
              d=ficha2;
              d_=3;
            }
            else if (g_==0){
              g=ficha2;
              g_=3;
            }
          }
          else if (columna2==2){
            if (b_==0){
              b=ficha2;
              b_=3;
            }
            else if (e_==0){
              e=ficha2;
              e_=3;
            }
            else if (h_==0){
              h=ficha2;
              h_=3;
            }
          }
          else if (columna3==2){
            if (c_==0){
              c=ficha2;
              c_=3;
            }
            else if (f_==0){
              f=ficha2;
              f_=3;
            }
            else if (i_==0){
              i=ficha2;
              i_=3;
            }
          }
          else if (diagonal1==2){
            if (a_==0){
              a=ficha2;
              a_=3;
            }
            else if (e_==0){
              e=ficha2;
              e_=3;
            }
            else if (i_==0){
              i=ficha2;
              i_=3;
            }
          }
          else if (diagonal2==2){
            if (c_==0){
              c=ficha2;
              c_=3;
            }
            else if (e_==0){
              e=ficha2;
              e_=3;
            }
            else if (g_==0){
              g=ficha2;
              g_=3;
            }
          }
      	}
        else if(fila1==6 || fila2==6 || fila3==6 || columna1==6 || columna2==6 || columna3==6 || diagonal1==6 || diagonal2==6){
          if (fila1==6){
            if (a_==0){
              a=ficha2;
              a_=3;
            }
            else if (b_==0){
              b=ficha2;
              b_=3;
            }
            else if (c_==0){
              c=ficha2;
              c_=3;
            }
          }
          else if (fila2==6){
            if (d_==0){
              d=ficha2;
              d_=3;
            }
            else if (e_==0){
              e=ficha2;
              e_=3;
            }
            else if (f_==0){
              f=ficha2;
              f_=3;
            }
          }
          else if (fila3==6){
            if (g_==0){
              g=ficha2;
              g_=3;
            }
            else if (h_==0){
              h=ficha2;
              h_=3;
            }
            else if (i_==0){
              i=ficha2;
              i_=3;
            }
          }
          else if (columna1==6){
            if (a_==0){
              a=ficha2;
              a_=3;
            }
            else if (d_==0){
              d=ficha2;
              d_=3;
            }
            else if (g_==0){
              g=ficha2;
              g_=3;
            }
          }
          else if (columna2==6){
            if (b_==0){
              b=ficha2;
              b_=3;
            }
            else if (e_==0){
              e=ficha2;
              e_=3;
            }
            else if (h_==0){
              h=ficha2;
              h_=3;
            }
          }
          else if (columna3==6){
            if (c_==0){
              c=ficha2;
              c_=3;
            }
            else if (f_==0){
              f=ficha2;
              f_=3;
            }
            else if (i_==0){
              i=ficha2;
              i_=3;
            }
          }
          else if (diagonal1==6){
            if (a_==0){
              a=ficha2;
              a_=3;
            }
            else if (e_==0){
              e=ficha2;
              e_=3;
            }
            else if (i_==0){
              i=ficha2;
              i_=3;
            }
          }
          else if (diagonal2==6){
            if (c_==0){
              c=ficha2;
              c_=3;
            }
            else if (e_==0){
              e=ficha2;
              e_=3;
            }
            else if (g_==0){
              g=ficha2;
              g_=3;
            }
          }
        }
        else{
	      	variable2=char(rand()%9+1);
	        switch(variable2)
	        {
	          case 1:
	            if (a==ficha1 || a==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            a=ficha2;
	            a_=3;
	            break;
	            }
	          case 2:
	            if (b==ficha1 || b==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            b=ficha2;
	            b_=3;
	            break;
	            }
	          case 3:
	            if (c==ficha1 || c==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            c=ficha2;
	            c_=3;
	            break;
	            }
	          case 4:
	            if (d==ficha1 || d==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            d=ficha2;
	            d_=3;
	            break;
	            }
	          case 5:
	            if (e==ficha1 || e==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            e=ficha2;
	            e_=3;
	            break;
	            }
	          case 6:
	            if (f==ficha1 || f==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            f=ficha2;
	            f_=3;
	            break;
	            }
	          case 7:
	            if (g==ficha1 || g==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            g=ficha2;
	            g_=3;
	            break;
	            }
	          case 8:
	            if (h==ficha1 || h==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            h=ficha2;
	            h_=3;
	            break;
	            }
	          case 9:
	            if (i==ficha1 || i==ficha2){
	              --x;
	              continue;
	            }
	            else{
	            i=ficha2;
	            i_=3;
	            break;
	            }
	          default:
	            x=9;
	            break;
	        }
	    }
        std::system("cls");
        std::cout << a << columna << b << columna << c << std::endl;
        std::cout << fila<<std::endl;
        std::cout << d << columna << e << columna << f << std::endl;
        std::cout << fila<<std::endl;
        std::cout << g << columna << h << columna << i << std::endl;
        if (x>=4){
          if ((a==b && b==c) || (a==d && d==g) || (a==e && e==i)||
              (b==e && e==h) || (c==f && f==i) || (c==e && e==g) ||
              (d==e && e==f) || (g==h && h==i)){
            std::cout << "Felicidades! Gano la IA "<<ficha2<<std::endl;
            x=9;
          }
          else if (x==9){
            std::cout << "Empate";
          }
        }
      }
    }
    std::cout << a_ << columna << b_ << columna << c_ << std::endl;
    std::cout << fila<<std::endl;
    std::cout << d_ << columna << e_ << columna << f_ << std::endl;
    std::cout << fila<<std::endl;
    std::cout << g_ << columna << h_ << columna << i_ << std::endl;
  
    return 0;

}
