#include "Vendedor.h"
using namespace std;

Vendedor::Vendedor()
{
	nombre = "";
	horaEntrada = "";
	horaSalida = "";
}

Vendedor::Vendedor(string pNombre, string pHoraEntrada, string pHoraSalida) : Usuario(pNombre)
{
	nombre = pNombre;
	horaEntrada = pHoraEntrada;
	horaSalida = pHoraSalida;
}

string Vendedor::getHoraEntrada()
{
	return horaEntrada;
}

string Vendedor::getHoraSalida()
{
	return horaSalida;
}

void Vendedor::setHoraEntrada(string pHoraEntrada)
{
	horaEntrada = pHoraEntrada;
}

void Vendedor::setHoraSalida(string pHoraSalida)
{
	horaSalida = pHoraSalida;
}

Vendedor::~Vendedor()
{

}
