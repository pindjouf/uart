import React from 'react';
import { ReactTerminal } from 'react-terminal';
import './App.css';

const App = () => {
    const commands = {
        whoami: "transistor lover",
        help: `Available commands:
          echo <message>  - Echo a message via UART
          clear         - Clear terminal
          status        - Show UART status`,

        echo: async (message) => {
            if (!message) return "Error: Please provide a message to echo";
            try {
                const response = await fetch('http://localhost:8000/echo', {
                    method: 'POST',
                    headers: {
                        'Content-Type': 'application/json',
                    },
                    body: JSON.stringify({ message }),
                });
                const data = await response.json();
                return `${data.ohce}`;
            } catch (error) {
                return `Error echoing ${message}: ${error.message}`;
            }
        },

        ping: async () => {
            try {
                const response = await fetch('http://localhost:8000/ping');
                const data = await response.json();
                return `Backend says: ${data.message}`;
            } catch (error) {
                return `Error connecting to backend: ${error.message}`;
            }
        }
    };

    return (
        <div className="app-container">
            <header className="header">
                <h1 className="title">(web)UART</h1>
                <p className="subtitle">Interact with your UART interface.</p>
            </header>

            <main className="main-content">
                <section className="magic-instructions">
                    <p className="instruction-text">
                        Type your command below to get started ex:
                    </p>
                    <code className="example-code">echo Hello, UART!</code>
                </section>

                <div className="terminal-area">
                    <ReactTerminal
                        commands={commands}
                        themes={{
                            gruvbox: {
                                themeBGColor: "#282828",
                                themeToolbarColor: "#3c3836",
                                themeColor: "#ebdbb2",
                                themePromptColor: "#fe8019",
                                themeCursorColor: "#d79921",
                            }
                        }}
                        theme="gruvbox"
                        prompt="> "
                    />
                </div>
            </main>

            <footer className="footer">
                <p className="footer-text">Developed by pindjouf | © {new Date().getFullYear()}</p>
                <a target="_blank" rel="noopener noreferrer" className="source-code-link" href="https://github.com/pindjouf/uart/tree/master/web">🔗 View Source Code</a>
            </footer>
        </div>
    );
};

export default App;
