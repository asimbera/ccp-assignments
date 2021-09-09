module.exports = {
  mode: 'jit',
  purge: ['./src/**/*.{html,pug,js,ts}'],
  separator: '_',
  darkMode: false, // or 'media' or 'class'
  theme: {
    extend: {},
    fontFamily: {
      sans: ['"Nunito Sans"', 'Manrope', 'sans-serif'],
      serif: ['Merriweather', 'serif'],
    },
  },
  variants: {
    extend: {},
  },
  plugins: [],
};
