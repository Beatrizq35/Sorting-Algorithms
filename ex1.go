package main
import ("fmt")

func sortVet(vet []int) []int {
	// implementar aqui o selection sort
	// https://www.youtube.com/watch?v=g-PGLbMth_g&ab_channel=MichaelSambol

  var aux, menor, pos_menor_j int

  for i := 0; i < len(vet); i++ {
    menor = vet[i]
    fmt.Println("start of loop: ", i)
    for j := i + 1; j < len(vet); j++ {

      fmt.Println()
      fmt.Println("interno loop: ", j)

      if vet[j] < menor {
        menor = vet[j]
        pos_menor_j = j

        fmt.Println("Menor: ", menor)
      }
      
    }
    if vet[i] > menor {
      aux = vet[pos_menor_j]
      vet[pos_menor_j] = vet[i]
      vet[i] = aux
    }
    
    fmt.Println("Vetor: ", vet)
    fmt.Println("end of loop: ", i)
    fmt.Println()
  }
    return vet
}

func main() {
  var vet []int
  var temp int

  for i := 0; i < 5; i++ {
    fmt.Scan(&temp)
    vet = append(vet, temp)
  }
  fmt.Println("Vet ORIGINAL: ", vet)

  sorted := sortVet(vet)

  fmt.Println(sorted)

}
