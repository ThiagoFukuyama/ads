
package pizzariapoo;

import java.util.List;


public class Invoicing {
    private List<Order> orders;

    public Invoicing(List<Order> orders) {
        this.orders = orders;
    }

    public List<Order> getOrders() {
        return orders;
    }
    
    public double getTotal() {
        return orders
                .stream()
                .reduce(0.0, (sum, order) -> sum + order.getTotal(), Double::sum);  
    }
    
    public int getTotalPizzas() {
        return orders
                .stream()
                .reduce(0, (total, order) -> total + order.getQuantity(), Integer::sum);
    }
    
    public void addOrder(Order order) {
        orders.add(order);
    }
    
    public void removeOrder(Order order) {
        orders.remove(order);
    }
    
    public void removeOrder(int index) {
        orders.remove(index);
    }
}
