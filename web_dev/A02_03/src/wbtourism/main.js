import '@splidejs/splide/dist/css/splide.min.css';
import Splide from '@splidejs/splide';

document.addEventListener('DOMContentLoaded', function () {
  new Splide('.splide', {
    // fixedHeight: 240,
    arrows: 'slider',
    // rewind: true,
    type: 'loop',
    gap: 20,
    padding: {
      // left: '4rem',
      right: '4rem',
    },
  }).mount();
  new Splide('.events', {
    fixedHeight: 178,
    arrows: 'slider',
    cover: true,
    // heightRatio: 0.4,
    gap: '2rem',
    perPage: 3,
    breakpoints: {
      640: {
        perPage: 1,
      },
      1080: {
        perPage: 2,
      },
    },
    // rewind: true,
    // type: 'loop',
    // gap: 20,
    // padding: {
    //   // left: '4rem',
    //   right: '4rem',
    // },
  }).mount();
});
