
#include <R.h>
#include "myheader.h"


void cum3(double *etain, int *neta, int *typein, double *cumout)
{
    int leneta=neta[0];
    int type = typein[0];
    int i;
    
 
    for(i=0;i<leneta;++i)
    {
	double eta = etain[i];
	switch (type) {
	case 1:
	    if(eta>0)
			{
			cumout[0]+= eta+log(exp(-eta)+1);
			break;
			}
   	    else
			{
			cumout[0]+= log(1+exp(eta));
			break;
			}

    case 2:
        cumout[0]+= exp(eta);
	    break;
    default:
        error("unrecognized type");
	    break;
        }
    }
}

