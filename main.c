#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argn, char **args){
	int rank, size;

	//Inicializa el entorno MPI
	MPI_Init(&argn, &args);

	//Obtiene el numero de procesos (rank)
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	//Obtiene el numero total de procesos
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	printf("Hola mundo soy el proceso %i de %i\n", rank, size);

	//Finaliza MPI
	MPI_Finalize();
	return 0;
}
