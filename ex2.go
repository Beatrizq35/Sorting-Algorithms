package main
import "fmt"

func insertionSort(vet []int) []int {
	var menor, posAnterior int

	for i := 0; i < len(vet); i++ {
		menor = vet[i]

		for j := i + 1; j < len(vet); j++ {        //4, 7, 3, 9, 5 menor = 3
			if vet[j] < menor {                    //0  1  2  3  4 
				menor = vet[j]                     //4, 3, 7, 9, 5
				//posPosterior = j + 1
				posAnterior = j - 1

				if menor < vet[posAnterior] {
					vet[j] = vet[posAnterior]
				}
			}
			vet[j] = menor
		}
	}
	return vet
}

func main () {
	var vet []int
	var temp int

	for i := 0; i < 5; i++ {
		fmt.Scan(&temp)
		vet = append(vet, temp)
	}

	fmt.Println(vet)
	vet = insertionSort((vet))
	fmt.Println(vet)
}
