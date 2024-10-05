public class Produto {

    private int id;
    private String descricao;
    private int estoque;
    private double precoCompra;


    public Produto(int id, String descricao, int estoque, double precoCompra) {
        this.id = id;
        this.descricao = descricao;
        this.estoque = estoque;
        this.precoCompra = precoCompra;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public int getEstoque() {
        return estoque;
    }

    public void setEstoque(int estoque) {
        this.estoque = estoque;
    }

    public double getPrecoCompra() {
        return precoCompra;
    }

    public void setPrecoCompra(double precoCompra) {
        this.precoCompra = precoCompra;
    }
}
