package questao01;

public class Lista<T> {
    // Atributos da classe questao01.Lista
    T[] valores;
    int quantidade;
    int tamanho;

    // Construtor da classe questao01.Lista
    public Lista(){
        this.quantidade = 0;
        // Inicializa o tamanho do vetor
        this.tamanho = 5;
        // Cria um vetor genérico de tamanho inicial
        this.valores = (T[]) new Object[tamanho];
    }

    // Método para recriar o vetor com o dobro do tamanho
    public void recriarVetor(){
        //Define o novo tamanho para o vetor
        int novoTamanho = this.tamanho*2;
        //Cria um novo vetor com o dobro do tamanho
        T[] valoresTemporario = (T[]) new Object[novoTamanho];
        //Copia os elementos do vetor atual para o novo vetor
        for(int i=0; i<quantidade;i++){
            valoresTemporario[i] = this.valores[i];
        }
        //Atualiza variáveis
        this.valores = valoresTemporario;
        this.tamanho = novoTamanho;
    }

    // Método para inserir um valor no início da lista
    public void inserirNoInicio(T valor){
        // Insere o valor no início da lista, chamando o método de inserção na posição 0
        this.inserirNaPosicao(0, valor);
    }

    // Método para inserir um valor no final da lista
    public void inserirNoFim(T valor){
        // Verifica se o vetor está cheio e recria se necessário
        if(this.quantidade == this.tamanho){
            this.recriarVetor();
        }
        // Insere o valor no final do vetor
        this.valores[this.quantidade] = valor;
        this.quantidade++;

        /*
            Opcionalmente poderia ser acionado o método para inserir diretamente na posição final
            this.inserirNaPosicao(this.quantidade, valor);
         */
    }

    // Método para inserir um valor em uma posição específica
    public void inserirNaPosicao(int indice, T valor){
        // Verifica se o vetor está cheio e recria se necessário
        if(this.tamanho == this.quantidade){
            this.recriarVetor();
        }

        // Verifica se o índice é válido
        if(indice < 0 || indice > this.quantidade) {
            throw new RuntimeException("Índice inválido: " + indice);
        }

        // Move os elementos para a direita para abrir espaço
        // Começa do final da lista e vai até o índice especificado
        for(int i=this.quantidade-1; i>=indice; i--){
            this.valores[i+1] = this.valores[i];
        }
        // Insere o valor na posição especificada
        this.valores[indice] = valor;
        this.quantidade++;
    }

    public void removerNoInicio(){
        this.removerNaPosicao(0);
    }

    // Método para remover o último valor da lista
    public void removerDoFim(){
        // Verifica se há elementos para remover
        if(this.quantidade>0){
            // Decrementa a quantidade e remove o último elemento
            this.quantidade--;
            this.valores[this.quantidade] = null;
        } else {
            // Lança uma exceção se não houver elementos
            throw new RuntimeException("Não existem elementos");
        }

        /*
            Opcionalmente poderia ser acionado o método para remover diretamente na posição final
            this.removerNaPosicao(this.quantidade-1);
         */
    }

    // Método para remover um valor de uma posição específica
    public void removerNaPosicao(int indice){
        // Move os elementos para a esquerda para preencher o espaço
        // Começa do índice especificado e vai até o final da lista
        for(int i=indice+1; i<this.quantidade;i++){
            this.valores[i-1] = this.valores[i];
        }
        // Define o último elemento como null para evitar referências
        this.valores[this.quantidade-1] = null;
        this.quantidade--;
    }

    // Método para imprimir os valores da lista
    public void imprimir(){
        for(int i=0; i<quantidade;i++){
            System.out.print(this.valores[i]+",");
        }
        System.out.println();
    }

    // Método para obter a quantidade de elementos na lista
    public int quantidade(){
        return this.quantidade;
    }

    // Método para verificar se a lista está vazia
    public boolean estaVazio(){
        return this.quantidade == 0;
    }

    // Método para limpar a lista, removendo todos os elementos
    public void limpar(){
        this.quantidade = 0;
        // Opcional: Recria o vetor para liberar memória
        this.valores = (T[]) new Object[tamanho];
    }

    // Método para buscar um elemento por índice
    T buscarPorIndice(int indice){
        // Verifica se o índice está dentro dos limites da lista
        if(indice>=0 && indice < this.quantidade){
            // Retorna o valor no índice especificado
            return this.valores[indice];
        }

        // Lança uma exceção se o índice for inválido
        throw new RuntimeException("Elemento["+indice+"] não existe");
    }

    // Método para buscar um elemento por valor
    public int buscarPorValor(T valor){
        // Percorre a lista para encontrar o valor
        for(int i=0;i<this.quantidade;i++) {
            // Se o valor for encontrado, retorna o índice
            if (this.valores[i] == valor) {
                return i;
            }
        }
        // Se o valor não for encontrado, retorna -1
        return -1;
    }


    // 0. Cria uma lista a partir de um vetor
    public static Lista fromArray(int[] array) {
        Lista<Integer> novaLista = new Lista<Integer>();
        for(int i=0; i<array.length; i++){
            novaLista.inserirNoFim(array[i]);
        }
        return novaLista;
    }

     //1. Concatena a lista atual com outra lista, retornando uma nova lista
    public Lista concatenar(Lista outraLista) {
        Lista<T> novaLista = new Lista<>();
        // Adiciona os elementos da lista atual
        for (int i = 0; i < this.quantidade; i++) {
            novaLista.inserirNoFim(this.valores[i]);
        }
        // Adiciona os elementos da outra lista
        for (int i = 0; i < outraLista.quantidade; i++) {
            novaLista.inserirNoFim((T)outraLista.valores[i]);
        }
        return novaLista;
    }

    // 2. Remove os n primeiros elementos da lista
    public boolean removerNPrimeiros(int n) {
        if (n > this.quantidade || n < 0) {
            return false; // operação impossível
        }
        for (int i = 0; i < n; i++) {
            this.removerNoInicio();
        }
        return true;
    }

    // 3. Troca dois elementos de posição na lista
    public boolean trocarPosicao(int pos1, int pos2) {
        if (pos1 < 0 || pos2 < 0 || pos1 >= quantidade || pos2 >= quantidade) {
            return false;
        }
        T temp = valores[pos1];
        valores[pos1] = valores[pos2];
        valores[pos2] = temp;
        return true;
    }

    // 4. Verifica se a lista está ordenada (crescente ou decrescente)
    public boolean estaOrdenada() {
        if (quantidade <= 1) return true;

        boolean crescente = true, decrescente = true;
        for (int i = 0; i < quantidade - 1; i++) {
            if (((Comparable) valores[i]).compareTo(valores[i + 1]) > 0) crescente = false;
            if (((Comparable) valores[i]).compareTo(valores[i + 1]) < 0) decrescente = false;
        }
        return crescente || decrescente;
    }

    // 5. Copia a lista para uma nova instância
    public Lista copiar() {
        Lista<T> novaLista = new Lista<>();
        for (int i = 0; i < this.quantidade; i++) {
            novaLista.inserirNoFim(this.valores[i]);
        }
        return novaLista;
    }

    // 6. Inverte a lista, retornando uma nova lista com o resultado
    public Lista inverter() {
        Lista<T> novaLista = new Lista<>();
        for (int i = this.quantidade - 1; i >= 0; i--) {
            novaLista.inserirNoFim(this.valores[i]);
        }
        return novaLista;
    }

    // 7. Inverte a própria lista (modifica o estado atual)
    public void autoInverter() {
        int i = 0, j = quantidade - 1;
        while (i < j) {
            T temp = valores[i];
            valores[i] = valores[j];
            valores[j] = temp;
            i++;
            j--;
        }
    }

    // 8. Realiza o merge de duas listas ordenadas
    public Lista merge(Lista outraLista) {
        Lista<T> novaLista = new Lista<>();
        int i = 0, j = 0;
        while (i < this.quantidade && j < outraLista.quantidade) {
            Comparable a = (Comparable) this.valores[i];
            Comparable b = (Comparable) outraLista.valores[j];
            if (a.compareTo(b) <= 0) {
                novaLista.inserirNoFim(this.valores[i]);
                i++;
            } else {
                novaLista.inserirNoFim((T)outraLista.valores[j]);
                j++;
            }
        }
        while (i < this.quantidade) novaLista.inserirNoFim(this.valores[i++]);
        while (j < outraLista.quantidade) novaLista.inserirNoFim((T)outraLista.valores[j++]);
        return novaLista;
    }

    // 9. Verifica se a lista atual é igual a outra lista
    public boolean saoIguais(Lista outraLista) {
        if (this.quantidade != outraLista.quantidade) return false;
        for (int i = 0; i < quantidade; i++) {
            if (!this.valores[i].equals(outraLista.valores[i])) return false;
        }
        return true;
    }

    // 10. Remove todos os elementos duplicados da lista
    public void removerDuplicados() {
        for (int i = 0; i < quantidade; i++) {
            T valorAtual = valores[i];
            int j = i + 1;
            while (j < quantidade) {
                if (valores[j].equals(valorAtual)) {
                    removerNaPosicao(j);
                } else {
                    j++;
                }
            }
        }
    }

    // 11. Rotaciona a lista para a esquerda por k posições
    public void rotacionar(int k) {
        if (k <= 0 || k >= quantidade) return;
        for (int i = 0; i < k; i++) {
            T primeiro = valores[0];
            removerNoInicio();
            inserirNoFim(primeiro);
        }
    }

    // 12. Retorna uma sublista da lista original
    public Lista sublista(int inicio, int fim) {
        if (inicio < 0 || fim >= quantidade || inicio > fim) {
            throw new RuntimeException("Índices inválidos");
        }
        Lista<T> novaLista = new Lista<>();
        for (int i = inicio; i <= fim; i++) {
            novaLista.inserirNoFim(valores[i]);
        }
        return novaLista;
    }

    // 13. Intercala a lista atual com outra lista
    public Lista intercalar(Lista outraLista) {
        Lista<T> novaLista = new Lista<>();
        int i = 0, j = 0;
        while (i < this.quantidade || j < outraLista.quantidade) {
            if (i < this.quantidade) novaLista.inserirNoFim(valores[i++]);
            if (j < outraLista.quantidade) novaLista.inserirNoFim((T)outraLista.valores[j++]);
        }
        return novaLista;
    }
}
