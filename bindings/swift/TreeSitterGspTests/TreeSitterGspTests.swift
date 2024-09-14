import XCTest
import SwiftTreeSitter
import TreeSitterGsp

final class TreeSitterGspTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gsp())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Gsp grammar")
    }
}
