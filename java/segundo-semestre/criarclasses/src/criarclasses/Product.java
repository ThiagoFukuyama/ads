
package criarclasses;

/**
 *
 * @author ThiagoFukuyama
 */
public class Product {
    
    private int id;
    private String name;
    private int amount;
    private int minimumAmount;
    private double price;

    public Product(int id, String name, int amount, int minimumAmount, double price) {
        this.id = id;
        this.name = name;
        this.amount = amount;
        this.minimumAmount = minimumAmount;
        this.price = price;
    }
    
    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAmount() {
        return amount;
    }

    public void setAmount(int amount) {
        this.amount = amount;
    }

    public int getMinimumAmount() {
        return minimumAmount;
    }

    public void setMinimumAmount(int minimumAmount) {
        this.minimumAmount = minimumAmount;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

}
