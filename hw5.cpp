#define TOTAL 5					//;
#define TURTLE 2;				//valid
typedef struct automobile {		//valid
	char	name[TOTAL];		//valid
	int  	vehicle_id;			//valid
	float	kpg;				//valid
	double	*manuf_code;		//valid
} Entry;						//valid
Entry	list[3], *passenger;	//valid
char	who[7], a, *b;			//valid
double	*d, d2;					//valid

Entry.kpg=35.6;					//== instead of =
list[1].kpg=29.1;				//valid
passenger->kpg=42.2				//passenger not initialized
who[TOTAL]=TURTLE				//;
list[2].manuf_code=&d2;			//valid
list.kpg=28.7;					//== instead of =
Entry->manuf_code=11;			//valid
list[3].name[0]=who[1];			//valid
list[TURTLE].vehicle_id=7;		//identifier error
list[TOTAL].vehicle_id=3;		//array error
passenger=&(list[0]); passenger->vehicle_id=3; //valid
 
