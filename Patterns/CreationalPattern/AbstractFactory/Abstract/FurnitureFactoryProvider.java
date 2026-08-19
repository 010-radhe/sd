package Patterns.CreationalPattern.AbstractFactory.Abstract;

public class FurnitureFactoryProvider {
    public static FurnitureFactory getFactory(String style) {
        return switch (style.toLowerCase()) {
            case "modern" -> new ModernFurnitureFactory();
            case "victorian" -> new VictorianFurnitureFactory();
            default -> throw new IllegalArgumentException("Unknown style: " + style);
        };
    }
}
