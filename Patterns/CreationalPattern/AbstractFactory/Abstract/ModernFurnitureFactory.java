package Patterns.CreationalPattern.AbstractFactory.Abstract;

public class ModernFurnitureFactory implements FurnitureFactory{
    public Chair createChair(){
        return new ModernChair();
    }
    public Table createTable(){
        return new ModernTable();
    };
}
