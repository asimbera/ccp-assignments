module.exports = {
  mode: 'jit',
  purge: ['./src/**/*.{html,pug,js,ts}'],
  separator: '_',
  darkMode: false, // or 'media' or 'class'
  theme: {
    extend: {},
    fontFamily: {
      sans: ['"Nunito Sans"', 'sans-serif'],
    },
  },
  variants: {
    extend: {},
  },
  plugins: [],
};
