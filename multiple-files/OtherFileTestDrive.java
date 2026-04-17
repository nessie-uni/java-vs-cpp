public class OtherFileTestDrive {

    public static void main(String[] args) {
        OtherFile.staticSayHi();
        
        OtherFile otherFile = new OtherFile();
        otherFile.nonStaticSayHi();
    }
}
