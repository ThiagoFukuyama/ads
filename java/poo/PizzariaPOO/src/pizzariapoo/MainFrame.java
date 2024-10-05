
package pizzariapoo;

import java.util.LinkedList;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;


public class MainFrame extends javax.swing.JFrame {
    Invoicing invoicing;

    public MainFrame() {
        initComponents();
        invoicing = new Invoicing(new LinkedList<>());
    }


    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();
        labelMainHeading = new javax.swing.JLabel();
        panelMakeOrder = new javax.swing.JPanel();
        labelClientName = new javax.swing.JLabel();
        inputClientName = new javax.swing.JTextField();
        labelPizza = new javax.swing.JLabel();
        Pizza[] pizzas = {
            new Pizza("Pizza de Mussarela", 45),
            new Pizza("Pizza Marguerita", 45),
            new Pizza("Pizza Portuguesa", 50),
            new Pizza("Pizza de Calabresa", 55),
            new Pizza("Pizza Quatro Queijos", 60),
            new Pizza("Pizza de Lombinho", 60),
        };
        comboBoxPizza = new javax.swing.JComboBox<Pizza>(pizzas);
        labelQuantity = new javax.swing.JLabel();
        inputQuantity = new javax.swing.JTextField();
        btnMakeOrder = new javax.swing.JButton();
        labelErrors = new javax.swing.JLabel();
        jScrollPane2 = new javax.swing.JScrollPane();
        tableOrders = new javax.swing.JTable();
        btnCalculateInvoicing = new javax.swing.JButton();
        btnExit = new javax.swing.JButton();
        labelTotalPriceText = new javax.swing.JLabel();
        labelTotalPrice = new javax.swing.JLabel();
        labelTotalPizzasText = new javax.swing.JLabel();
        labelTotalPizzas = new javax.swing.JLabel();
        btnDeleteOrder = new javax.swing.JButton();

        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ));
        jScrollPane1.setViewportView(jTable1);

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Pizzaria da FATEC");
        setResizable(false);

        labelMainHeading.setFont(new java.awt.Font("Dialog", 1, 24)); // NOI18N
        labelMainHeading.setForeground(new java.awt.Color(51, 51, 255));
        labelMainHeading.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        labelMainHeading.setText("Pizzaria da FATEC");
        labelMainHeading.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 102, 255)));

        panelMakeOrder.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 102, 255)), "Realizar Pedido", javax.swing.border.TitledBorder.DEFAULT_JUSTIFICATION, javax.swing.border.TitledBorder.DEFAULT_POSITION, new java.awt.Font("Dialog", 0, 18), new java.awt.Color(51, 51, 255))); // NOI18N

        labelClientName.setFont(new java.awt.Font("Dialog", 0, 16)); // NOI18N
        labelClientName.setText("Cliente");

        labelPizza.setFont(new java.awt.Font("Dialog", 0, 16)); // NOI18N
        labelPizza.setText("Escolha a Pizza");

        comboBoxPizza.setEditable(true);

        labelQuantity.setFont(new java.awt.Font("Dialog", 0, 16)); // NOI18N
        labelQuantity.setText("Quantidade");

        btnMakeOrder.setText("REALIZAR PEDIDO");
        btnMakeOrder.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnMakeOrderActionPerformed(evt);
            }
        });

        labelErrors.setFont(new java.awt.Font("Dialog", 1, 14)); // NOI18N
        labelErrors.setForeground(new java.awt.Color(255, 0, 0));

        javax.swing.GroupLayout panelMakeOrderLayout = new javax.swing.GroupLayout(panelMakeOrder);
        panelMakeOrder.setLayout(panelMakeOrderLayout);
        panelMakeOrderLayout.setHorizontalGroup(
            panelMakeOrderLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(panelMakeOrderLayout.createSequentialGroup()
                .addGap(15, 15, 15)
                .addGroup(panelMakeOrderLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(panelMakeOrderLayout.createSequentialGroup()
                        .addComponent(btnMakeOrder, javax.swing.GroupLayout.PREFERRED_SIZE, 200, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(29, 29, 29)
                        .addComponent(labelErrors, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                    .addComponent(inputClientName)
                    .addGroup(panelMakeOrderLayout.createSequentialGroup()
                        .addGroup(panelMakeOrderLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(labelClientName, javax.swing.GroupLayout.PREFERRED_SIZE, 156, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(comboBoxPizza, javax.swing.GroupLayout.PREFERRED_SIZE, 372, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(labelPizza, javax.swing.GroupLayout.PREFERRED_SIZE, 156, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(25, 25, 25)
                        .addGroup(panelMakeOrderLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(labelQuantity, javax.swing.GroupLayout.PREFERRED_SIZE, 156, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(inputQuantity, javax.swing.GroupLayout.PREFERRED_SIZE, 271, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addContainerGap(174, Short.MAX_VALUE))
        );
        panelMakeOrderLayout.setVerticalGroup(
            panelMakeOrderLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(panelMakeOrderLayout.createSequentialGroup()
                .addGap(29, 29, 29)
                .addComponent(labelClientName)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(inputClientName, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(27, 27, 27)
                .addGroup(panelMakeOrderLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(labelPizza)
                    .addComponent(labelQuantity))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(panelMakeOrderLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(comboBoxPizza, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(inputQuantity, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(26, 26, 26)
                .addGroup(panelMakeOrderLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btnMakeOrder, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(labelErrors, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(37, Short.MAX_VALUE))
        );

        tableOrders.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Cliente", "Pizza", "Preço", "Quantidade", "Total"
            }
        ) {
            Class[] types = new Class [] {
                java.lang.String.class, java.lang.String.class, java.lang.String.class, java.lang.String.class, java.lang.String.class
            };
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false
            };

            public Class getColumnClass(int columnIndex) {
                return types [columnIndex];
            }

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        jScrollPane2.setViewportView(tableOrders);

        btnCalculateInvoicing.setText("CALCULAR FATURAMENTO");
        btnCalculateInvoicing.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCalculateInvoicingActionPerformed(evt);
            }
        });

        btnExit.setText("SAIR");
        btnExit.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnExitActionPerformed(evt);
            }
        });

        labelTotalPriceText.setFont(new java.awt.Font("Dialog", 0, 14)); // NOI18N
        labelTotalPriceText.setText("Valor Total:");

        labelTotalPrice.setFont(new java.awt.Font("Dialog", 1, 18)); // NOI18N
        labelTotalPrice.setForeground(new java.awt.Color(0, 153, 0));
        labelTotalPrice.setText("R$0,00");

        labelTotalPizzasText.setFont(new java.awt.Font("Dialog", 0, 14)); // NOI18N
        labelTotalPizzasText.setText("Total de Pizzas:");

        labelTotalPizzas.setFont(new java.awt.Font("Dialog", 1, 18)); // NOI18N
        labelTotalPizzas.setText("0");

        btnDeleteOrder.setText("EXCLUIR PEDIDO");
        btnDeleteOrder.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnDeleteOrderActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(panelMakeOrder, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(labelMainHeading, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jScrollPane2)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(btnCalculateInvoicing, javax.swing.GroupLayout.PREFERRED_SIZE, 200, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(btnDeleteOrder, javax.swing.GroupLayout.PREFERRED_SIZE, 200, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(66, 66, 66)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(labelTotalPizzasText, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(labelTotalPriceText, javax.swing.GroupLayout.PREFERRED_SIZE, 120, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(labelTotalPizzas, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(labelTotalPrice, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(btnExit, javax.swing.GroupLayout.PREFERRED_SIZE, 87, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(labelMainHeading, javax.swing.GroupLayout.PREFERRED_SIZE, 74, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(panelMakeOrder, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 152, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(btnCalculateInvoicing, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(btnExit, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addComponent(btnDeleteOrder, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(labelTotalPizzas, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(labelTotalPrice, javax.swing.GroupLayout.PREFERRED_SIZE, 26, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(labelTotalPizzasText, javax.swing.GroupLayout.PREFERRED_SIZE, 26, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(labelTotalPriceText, javax.swing.GroupLayout.PREFERRED_SIZE, 26, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(117, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnMakeOrderActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnMakeOrderActionPerformed
        Pizza selectedPizza = (Pizza) comboBoxPizza.getSelectedItem();
        String clientName = inputClientName.getText();
        String quantityText = inputQuantity.getText();
        
        if (clientName.isEmpty() || quantityText.isEmpty()) {
            labelErrors.setText("Preencha todos os campos!");
            return;
        };
        
        try {
            int quantity = Integer.parseInt(quantityText);
            invoicing.addOrder(new Order(selectedPizza, quantity, clientName));
            labelErrors.setText("");
            updateOrdersTable();
        } catch (NumberFormatException e) {
            labelErrors.setText("Insira uma quantidade válida!");
        } 
    }//GEN-LAST:event_btnMakeOrderActionPerformed

    private void btnExitActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnExitActionPerformed
        dispose();
    }//GEN-LAST:event_btnExitActionPerformed

    private void btnCalculateInvoicingActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCalculateInvoicingActionPerformed
        int totalPizzas = invoicing.getTotalPizzas();
        double totalValue = invoicing.getTotal();
        
        labelTotalPizzas.setText(String.valueOf(totalPizzas));
        labelTotalPrice.setText(String.format("R$%.2f", totalValue));
    }//GEN-LAST:event_btnCalculateInvoicingActionPerformed

    private void btnDeleteOrderActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnDeleteOrderActionPerformed
        int selectedRow = tableOrders.getSelectedRow();
        
        if (selectedRow == -1) return;
        
        Order selectedOrder = invoicing.getOrders().get(selectedRow);
        
        String paneMessage = String.format(
            "Deseja realmente excluir este pedido? %n %n"
            + "Cliente: %s %n"
            + "%s %n"
            + "Quantidade: %d %n"
            + "Valor Total: R$%.2f",
        selectedOrder.getClientName(), 
        selectedOrder.getPizza().toString(), 
        selectedOrder.getQuantity(), 
        selectedOrder.getTotal()
        );
        
        int deleteOption = JOptionPane.showConfirmDialog(this, paneMessage, "Confirmação de Exclusão de Pedido", JOptionPane.YES_NO_CANCEL_OPTION);
        
        if (JOptionPane.YES_OPTION == deleteOption) {
            invoicing.removeOrder(selectedOrder);
            updateOrdersTable();
        }
    }//GEN-LAST:event_btnDeleteOrderActionPerformed

    private void updateOrdersTable() {
        DefaultTableModel model = (DefaultTableModel) tableOrders.getModel();
        model.setRowCount(0);
        
        for (Order order : invoicing.getOrders()) {
            Pizza pizza = order.getPizza();
            
            Object[] row = {
                order.getClientName(), 
                pizza.getName(), 
                String.format("R$%.2f", pizza.getPrice()),
                order.getQuantity(),
                String.format("R$%.2f", order.getTotal()),
            };
            
            model.addRow(row);
         }
    }
    
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(MainFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(MainFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(MainFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(MainFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new MainFrame().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnCalculateInvoicing;
    private javax.swing.JButton btnDeleteOrder;
    private javax.swing.JButton btnExit;
    private javax.swing.JButton btnMakeOrder;
    private javax.swing.JComboBox<Pizza> comboBoxPizza;
    private javax.swing.JTextField inputClientName;
    private javax.swing.JTextField inputQuantity;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JTable jTable1;
    private javax.swing.JLabel labelClientName;
    private javax.swing.JLabel labelErrors;
    private javax.swing.JLabel labelMainHeading;
    private javax.swing.JLabel labelPizza;
    private javax.swing.JLabel labelQuantity;
    private javax.swing.JLabel labelTotalPizzas;
    private javax.swing.JLabel labelTotalPizzasText;
    private javax.swing.JLabel labelTotalPrice;
    private javax.swing.JLabel labelTotalPriceText;
    private javax.swing.JPanel panelMakeOrder;
    private javax.swing.JTable tableOrders;
    // End of variables declaration//GEN-END:variables
}
