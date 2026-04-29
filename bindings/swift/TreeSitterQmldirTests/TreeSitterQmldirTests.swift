import XCTest
import SwiftTreeSitter
import TreeSitterQmldir

final class TreeSitterQmldirTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_qmldir())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Qmldir grammar")
    }
}
