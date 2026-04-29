import io.github.treesitter.jtreesitter.Language;
import io.github.treesitter.jtreesitter.qmldir.TreeSitterQmldir;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

public class TreeSitterQmldirTest {
    @Test
    public void testCanLoadLanguage() {
        assertDoesNotThrow(() -> new Language(TreeSitterQmldir.language()));
    }
}
