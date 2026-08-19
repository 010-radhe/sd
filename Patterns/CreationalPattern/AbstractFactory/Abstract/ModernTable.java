package Patterns.CreationalPattern.AbstractFactory.Abstract;
public class ModernTable implements Table{

        @Override
        public void use() {
            System.out.println("Using a modern table");
        }
}
