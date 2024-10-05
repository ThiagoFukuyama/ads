
package pizzariapoo;


public class Order {
    private Pizza pizza;
    private String clientName;
    private int quantity;
    
    public Order(Pizza pizza, int quantity, String clientName) {
        this.pizza = pizza;
        this.quantity = quantity;
        this.clientName = clientName;
    }
    
    public double getTotal() {
        return pizza.getPrice() * quantity;
    }

    public Pizza getPizza() {
        return pizza;
    }

    public void setPizza(Pizza pizza) {
        this.pizza = pizza;
    }

    public String getClientName() {
        return clientName;
    }

    public void setClientName(String clientName) {
        this.clientName = clientName;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }
    
    
}
