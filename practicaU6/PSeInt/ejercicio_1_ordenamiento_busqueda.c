Proceso ejercicio_1_ordybusqueda
	//1. Realizar un programa que permita al usuario de un hospital, buscar a un paciente por el número de DNI e informar al usuario los datos de la persona.
	//Realizar una búsqueda secuencial 
	//Nota: Dejamos éstos datos fijos para facilitar la realización del ejercicio pero se supone que en un caso real éstos datos estarían en una base de datos 
	//o en algún archivo.
	
	Definir clientes, dniABuscar Como Cadena
	Dimension clientes[8,6]
	
	CargarClientes(clientes)
	
	Repetir		
		Escribir "Ingrese el dni a buscar"
		Leer dniABuscar
		posicion <- BuscarPorDNI(clientes, dniABuscar)
		Si posicion == -1 Entonces
			Escribir "DNI NO ENCONTRADO"
		SiNo
			MostrarDatos(clientes, posicion)
		FinSi
	Mientras Que dniABuscar <> ""

FinProceso

SubProceso CargarClientes(arreglo)
	arreglo[0,0]="0"
	arreglo[0,1]="Ana"
	arreglo[0,2]="Martinez"
	arreglo[0,3]="17123456"
	arreglo[0,4]="+541141200011"
	arreglo[0,5]="56"
	
	arreglo[1,0]="1"
	arreglo[1,1]="Camila"
	arreglo[1,2]="Noe"
	arreglo[1,3]="25789101"
	arreglo[1,4]="+543419485831"
	arreglo[1,5]="45"
	
	arreglo[2,0]="2"
	arreglo[2,1]="Bruno"
	arreglo[2,2]="Noe"
	arreglo[2,3]="39121314"
	arreglo[2,4]="+541145565789"
	arreglo[2,5]="26"
	
	arreglo[3,0]="3"
	arreglo[3,1]="Dardo"
	arreglo[3,2]="Pistilli"
	arreglo[3,3]="2115161"
	arreglo[3,4]="+541158637543"
	arreglo[3,5]="48"
	
	arreglo[4,0]="4"
	arreglo[4,1]="Ernestina"
	arreglo[4,2]="Quesada"
	arreglo[4,3]="33181920"
	arreglo[4,4]="+541161294758"
	arreglo[4,5]="35"

	arreglo[5,0]="5"
	arreglo[5,1]="Fausto"
	arreglo[5,2]="Ramirez"
	arreglo[5,3]="15212223"
	arreglo[5,4]="+543423444567"
	arreglo[5,5]="60"
	
	arreglo[6,0]="6"
	arreglo[6,1]="Jasmín"
	arreglo[6,2]="Sosa"
	arreglo[6,3]="40242526"
	arreglo[6,4]="+543402512345"
	arreglo[6,5]="25"
	
	arreglo[7,0]="7"
	arreglo[7,1]="Leonardo"
	arreglo[7,2]="Tolosa"
	arreglo[7,3]="11272829"
	arreglo[7,4]="+541151234567"
	arreglo[7,5]="70"
FinSubProceso

Funcion posicion <- BuscarPorDNI(arreglo, numABuscar)
	Definir i, posicion Como Entero
	posicion<--1	
	Mientras i < 8 Hacer
		Si arreglo[i,3] == numABuscar Entonces
			posicion<-ConvertirANumero(arreglo[i,0])
		FinSi
		i = i + 1
	FinMientras
FinFuncion

SubProceso MostrarDatos(arreglo, pos)
	Definir i Como Entero
	Escribir "Datos: " Sin Saltar
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Escribir arreglo[pos,i], " " Sin Saltar
	FinPara
	Escribir " "
FinSubProceso
	