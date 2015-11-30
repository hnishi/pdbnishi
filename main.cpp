#include"nlib.h"

using namespace std;


int main(int argc, char *argv[]){
  cout<<"Version info. pdbnishi v1.0.1 \n";

// ##################### ARGUMENT HANDLING ##########################
// argv[1]: input file
  if( argv[1]==NULL ){
    puts("No ARGUMEMTS");
    puts("USAGE: ./a.out (input pdb) (output pdb) ");
    return 1;
  }
  cout<<"Your input files: "<<argv[1]<<endl;

// CHECK OF pdb_nishi
	pdb_nishi pdb1(argv[1]);
	pdb1.write_pdb(argv[2]);
	cout<<"TOTAL ATOM = "<<pdb1.total_atom<<endl;
	cout<<"TOTAL RESIDUE = "<<pdb1.resi_mark.size()<<endl;

// END
	cout<<"\nit took "<<(float)clock()/CLOCKS_PER_SEC<<" sec of CPU to execute this program"<<endl;
	return 0;
}
