package questao01;

public class Principal {

    public static void main(String[] args) {
        Lista<Integer> l1 = new Lista<>();
        l1.inserirNoFim(1);
        l1.inserirNoFim(2);
        l1.inserirNoFim(3);
        l1.inserirNoFim(4);
        l1.inserirNoFim(5);

        Lista<Integer> l2 = new Lista<>();
        l2.inserirNoFim(6);
        l2.inserirNoFim(7);
        l2.inserirNoFim(8);

        System.out.print("L1: "); l1.imprimir();
        System.out.print("L2: "); l2.imprimir();
        System.out.println();

        // 0 Criar lista a partir de vetor
        int[] vetor = {1, 2, 3, 4, 5};
        Lista<Integer> L1 = Lista.fromArray(vetor);
        System.out.print("L1 (vetor): ");
        L1.imprimir();
        System.out.println();

        // 1 Concatenar duas listas
        Lista<Integer> L2 = new Lista<>();
        L2.inserirNoFim(6);
        L2.inserirNoFim(7);
        L2.inserirNoFim(8);
        System.out.println();

        // 2 Remover n primeiros
        boolean r1 = l1.removerNPrimeiros(3);
        System.out.print("Remover 3 primeiros de L1: "); l1.imprimir();
        System.out.println("retorno = " + r1);
        System.out.println();

        // 3 Trocar posições
        boolean r2 = l1.trocarPosicao(0, 1);
        System.out.print("Trocar posições 0 e 1 em L1: "); l1.imprimir();
        System.out.println("retorno = " + r2);
        System.out.println();

        // 4 Verificar se está ordenada
        System.out.println("L1 está ordenada? " + l1.estaOrdenada());
        System.out.println();

        // 5 Copiar
        Lista<Integer> l3 = l2.copiar();
        System.out.print("Cópia de L2: "); l3.imprimir();
        System.out.println();

        // 6 Inverter em nova lista
        Lista<Integer> l4 = l2.inverter();
        System.out.print("Inverter L2 em nova L4: "); l4.imprimir();
        System.out.println();

        // 7 Inverter no próprio estado
        l2.autoInverter();
        System.out.print("L2 após autoInverter: "); l2.imprimir();
        System.out.println();

        // 8 Merge
        Lista<Integer> l5 = new Lista<>();
        l5.inserirNoFim(1);
        l5.inserirNoFim(3);
        l5.inserirNoFim(5);

        Lista<Integer> l6 = new Lista<>();
        l6.inserirNoFim(2);
        l6.inserirNoFim(4);
        l6.inserirNoFim(6);

        Lista<Integer> l7 = l5.merge(l6);
        System.out.print("Merge de L5 e L6: "); l7.imprimir();
        System.out.println();

        // 9 Igualdade por conteúdo
        System.out.println("L5 e L7 são iguais? " + l5.saoIguais(l7));
        Lista<Integer> l8 = l5.copiar();
        System.out.println("L5 e L8 são iguais? " + l5.saoIguais(l8));
        System.out.println();

        // 10 Remover duplicados
        Lista<Integer> l9 = new Lista<>();
        l9.inserirNoFim(1);
        l9.inserirNoFim(2);
        l9.inserirNoFim(2);
        l9.inserirNoFim(3);
        l9.inserirNoFim(3);
        System.out.print("L9 original: "); l9.imprimir();
        l9.removerDuplicados();
        System.out.print("L9 sem duplicados: "); l9.imprimir();
        System.out.println();

        // 11 Rotacionar k posições
        Lista<Integer> l10 = new Lista<>();
        l10.inserirNoFim(1);
        l10.inserirNoFim(2);
        l10.inserirNoFim(3);
        l10.inserirNoFim(4);
        l10.inserirNoFim(5);
        l10.rotacionar(2);
        System.out.print("Rotacionar L10 2 posições: "); l10.imprimir();
        System.out.println();

        // 12 Sublista
        Lista<Integer> l11 = l10.sublista(1, 3);
        System.out.print("Sublista de L10 (1 a 3): "); l11.imprimir();
        System.out.println();

        // 13 Intercalar
        Lista<Integer> l12 = l5.intercalar(l6);
        System.out.print("Intercalar L5 e L6: "); l12.imprimir();
        System.out.println();
    }
}
