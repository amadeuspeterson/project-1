cmake_minimum_required(VERSION 3.17)
project(project_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(project_1 main.cpp
        Automaton.h
        BlockCommentAutomaton.cpp
        BlockCommentAutomaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        IDAutomaton.cpp
        IDAutomaton.h
        Lexer.cpp
        Lexer.h
        LineCommentAutomaton.cpp
        LineCommentAutomaton.h
        MatcherAutomaton.cpp
        MatcherAutomaton.h
        StringAutomaton.cpp
        StringAutomaton.h
        Token.cpp
        Token.h
        )